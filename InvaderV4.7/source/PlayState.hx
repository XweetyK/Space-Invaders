package;

import entities.Bala;
import entities.Nave;
import entities.AlienBala;
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
	private var playerLose:FlxText;
	private var playerContVidas:FlxText;
	private var playerContScore:FlxText;
	private var playerVidas:Int;
	override public function create():Void
	{
		super.create();
		alien = new FlxTypedGroup<Alien>();
		var color:Array<Int>;
		color = [FlxColor.BLUE, FlxColor.GREEN, FlxColor.GREEN, FlxColor.YELLOW, FlxColor.RED];
		for (i in 0...50)
		{
			a = new Alien(10 + (i % 10) * 10, 12 + Std.int(i / 10) * 10, color[Std.int(i / 10)]);
			alien.add(a);
		}
		player = new Nave(72+8, 132);
		add(alien);
		add(player);
		playerLose = new FlxText(1, 65, 480, "You died! Press R to restart", 9);
		playerContVidas = new FlxText(1, 1, 480, "", 9);
		playerContScore = new FlxText(1,125, 480, "", 8);
		add(playerContVidas);
		add(playerContScore);
		add(playerLose);
		playerLose.kill();
		playerVidas = Reg.cantVidas;
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		//Texto contador de vidas
		playerContVidas.text = "Lifes: " + playerVidas;
		//Texto contador de score
		playerContScore.text = "Score: " + player.playerScore;
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
				alien.members[i].kill();
				player.PlayerBala.kill();
				player.playerAddScore(25);
			}
		}
		//Collision player - Aliens
		for (i in 0...alien.members.length)
		{
			if (FlxG.overlap(player, alien.members[i]))
			{
				alien.members[i].kill();
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
			}
		}
	}
	
	//Mata los aliens, las balas de los aliens y las balas del player
	function cleanScreen():Void 
	{
		for (i in 0...alien.members.length)
		{
			alien.members[i].disp.kill();
		}
		alien.kill();
		player.PlayerBala.kill();
	}

}