package;

import entities.Bala;
import entities.Barrera;
import entities.Nave;
import entities.AlienBala;
import entities.Ovni;
import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import entities.Alien;

class PlayState extends FlxState
{
	private var alien:FlxTypedGroup<Alien>;
	private var player:Nave;
	private var a:Alien;
	private var b1:Barrera;
	private var b2:Barrera;
	private var b3:Barrera;
	private var b4:Barrera;
	private var playerLose:FlxText;
	private var playerContVidas:FlxText;
	private var playerContScore:FlxText;
	private var playerVidas:Int;
	private var ovni:Ovni;
	override public function create():Void
	{
		super.create();
		
		Inicializar();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		//Texto contador de vidas
		playerContVidas.text = "Lives: " + playerVidas;
		//Texto contador de score
		playerContScore.text = "Score: " + player.playerScore;
		gameOver();
		collision();
	}

	//Ocurre por cada muerte del player
	function playerDeath() 
	{
		player.kill(); 
		playerVidas -= 1;
		
		if (playerVidas > 0)
		{
			player.revive();
			player.x = 72+8;
			player.y = 132;
		}
		else
		{
			cleanScreen();
			playerLose.revive();
		}
	}
	
	function collision() 
	{	
		//Collision Playerbala - Aliens
		for (i in 0...alien.members.length)
		{
			if (FlxG.overlap(player.PlayerBala,alien.members[i]))
			{
				alien.members[i].destroy();
				player.PlayerBala.kill();
				player.playerAddScore(25);
			}
		}
		//Collision player - Aliens
		for (i in 0...alien.members.length)
		{
			if (FlxG.overlap(player, alien.members[i]))
			{
				alien.members[i].destroy();
				playerDeath();
				player.playerAddScore(25);
			}
		}
		//Collision Alien.disp - player
		for (i in 0...alien.members.length)
		{
		if (FlxG.overlap(alien.members[i].disp,player))
			{
				playerDeath();
				alien.members[i].disp.destroy();
			}
		}
		//si los aliens llegan al margen inferior game over
		for (i in 0...alien.members.length)
		{
		if (alien.members[i].y==135)
			{
				alien.members[i].y=15;
				cleanScreen();
				playerLose.revive();
			}
		}
		//Collision PlayerBala - ovni
		if (FlxG.overlap(player.PlayerBala,ovni))
		{
			ovni.x=-150;
			player.PlayerBala.kill();
			player.playerAddScore(100);
		}
		//Collision AlienDisp - barreras
		for (i in 0...alien.members.length)
		{
		if (FlxG.overlap(alien.members[i].disp,b1))
			{
				b1.destroy();
				alien.members[i].disp.destroy();
			}
		if (FlxG.overlap(alien.members[i].disp,b2))
			{
				b2.destroy();
				alien.members[i].disp.destroy();
			}
		if (FlxG.overlap(alien.members[i].disp,b3))
			{
				b3.destroy();
				alien.members[i].disp.destroy();
			}
		if (FlxG.overlap(alien.members[i].disp,b4))
			{
				b4.destroy();
				alien.members[i].disp.destroy();
			}
		}
		//Collision Alien - barreras
		for (i in 0...alien.members.length)
		{
		if (FlxG.overlap(alien.members[i],b1))
			{
				b1.destroy();
				alien.members[i].kill();
			}
		if (FlxG.overlap(alien.members[i],b2))
			{
				b2.destroy();
				alien.members[i].kill();
			}
		if (FlxG.overlap(alien.members[i],b3))
			{
				b3.destroy();
				alien.members[i].kill();
			}
		if (FlxG.overlap(alien.members[i],b4))
			{
				b4.destroy();
				alien.members[i].kill();
			}
		}
	}
	
	//Mata los aliens, las balas de los aliens y las balas del player
	function cleanScreen():Void 
	{
		alien.kill();
		for (i in 0... alien.members.length)
		{
			alien.members[i].disp.destroy();
		}
		player.PlayerBala.destroy();
		player.destroy();
		ovni.destroy();
		b1.destroy();
		b2.destroy();
		b3.destroy();
		b4.destroy();
	}
	//Iniciar el nivel
	function Inicializar():Void 
	{
		alien = new FlxTypedGroup<Alien>();
		var color:Array<Int>;
		var sprite:FlxSprite;
		color = [FlxColor.GREEN, FlxColor.GREEN, FlxColor.GREEN, FlxColor.GREEN, FlxColor.GREEN];
		for (i in 0...50)
		{
			a = new Alien(15 + (i % 10) * 12, 20 + Std.int(i / 10) * 10, color[Std.int(i / 10)]);
			alien.add(a);
		}
		b1 = new Barrera (10, 120);
		add(b1);
		b2 = new Barrera (50, 120);
		add(b2);
		b3 = new Barrera (90, 120);
		add(b3);
		b4 = new Barrera (130, 120);
		add(b4);
		player = new Nave(72 + 8, 132);
		playerLose = new FlxText(1, 65, 480, "You died! Press R to restart", 9);
		playerContVidas = new FlxText(1, 1, 480, "", 8);
		playerContScore = new FlxText(100, 1, 480, "", 8);
		ovni = new Ovni( -150, 10);
		
		add(alien);
		add(player);
		add(ovni);
		player.kill();
		alien.kill();
		ovni.kill();
		b1.kill();
		b2.kill();
		b3.kill();
		b4.kill();
		player.revive();
		alien.revive();
		ovni.revive();
		b1.revive();
		b2.revive();
		b3.revive();
		b4.revive();
		
		playerLose.kill();
		playerVidas = Reg.cantVidas;
		
		add(playerContVidas);
		add(playerContScore);
		add(playerLose);
	}
	
	function gameOver():Void 
	{
		//Restart
		if (playerLose.alive)
		{
			if (FlxG.keys.pressed.R)
			{
			playerLose.kill();
			playerContVidas.destroy();
			playerContScore.destroy();
			playerLose.destroy();
			alien.destroy();
			ovni.destroy();
			b1.destroy();
			b2.destroy();
			b3.destroy();
			b4.destroy();
			Inicializar();
			}
		}
	}
	
	
	override public function destroy():Void
	{
		FlxG.state.remove(this);
		super.destroy();
	}
}