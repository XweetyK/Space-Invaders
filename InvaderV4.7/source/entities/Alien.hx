package entities;

/**
 * ...
 * @author Chikoritos
 */

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.system.FlxAssets.FlxGraphicAsset;
import entities.AlienBala;
import Reg;

class Alien extends FlxSprite
{
	
	private var origen:Int;
	private var dispClock:Float;
	public var disp(get, null):AlienBala = new AlienBala();
	
	public function new(X:Int, Y:Int, Color:Int)
	{
		super(X, Y);
		//grafico alien
		loadGraphic(AssetPaths.test__png, true, 8, 8);
		color = Color;
		//animacion alien
		animation.add("alien", [0, 1, 2, 3], 3, true);
		this.animation.play("alien");
		
		origen = X;
		velocity.x = 30;
		
	}
	
	override public function update(elapsed:Float):Void
	{
		//Movimiento zig zag
		if (x < origen - 7)
		{
			x = origen - 7;
			velocity.x = -velocity.x;
			y = y + 5;
		}
		if (x > origen + 22)
		{
			x = origen + 22;
			velocity.x = -velocity.x;
			y = y + 5;
		}
		super.update(elapsed);
		shoot();
		resetShotClock();
	}
	private function shoot():Void
	{ // disparo aleatorio
		if (dispClock <= 2)
		{
			if (Reg.balaCont < Reg.cantMaxBalas)
			{
				Reg.balaCont ++;
				resetShotClock();
				disp.x = x;
				disp.y = y;
				FlxG.state.add(disp);
			}
		}
	}
	private function resetShotClock():Void
	{ // numero random para disparo aleatorio
		dispClock = 1 + FlxG.random.float() * 30;
	}
	
	function get_disp():AlienBala 
	{
		return disp;
	}
}