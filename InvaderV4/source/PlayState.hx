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
import entities.Alien;

class PlayState extends FlxState
{
	private var alien:FlxTypedGroup<Alien>;
	private var player:Nave;
	private var a:Alien;
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
		player = new Nave(32, 132);
		add(alien);
		add(player);
		
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		collision();
	}
	
	function collision() 
	{
		for (i in 0...alien.members.length)
		{
			if (FlxG.collide(player.Playerbala,alien.members[i]))
			{
				alien.members[i].kill();
				player.Playerbala.kill();
			}
		}
		for (i in 0...alien.members.length)
		{
			if (FlxG.collide(player, alien.members[i]))
			{
				// player.kill(); NO FUNCA, IR DIRECTO A GAME OVER
			}
		}
	}

}