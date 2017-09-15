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

class Ovni extends FlxSprite
{
	
	private var origen:Int;
	private var clock:Float;
	public var disp(get, null):AlienBala = new AlienBala();
	public var cont:Int;
	
	public function new(X:Int, Y:Int)
	{
		super(X, Y);
		//grafico alien
		loadGraphic(AssetPaths.ovni__png, true, 16, 8);
		//animacion alien
		animation.add("alien", [0, 1, 0, 1], 3, true);
		this.animation.play("alien");
		
		origen = X;
		cont = 0;
		
	}
	
	override public function update(elapsed:Float):Void
	{
		//Movimiento Ovni
		for (cont in 0...5000)
		{
			resetClock();
			if (clock<=2)
			{
				velocity.x = 30;
				if (x == 180)
				{
					x = origen;
					velocity.x = 0;
				}
				resetClock();
			}
		}
		super.update(elapsed);
	}
	private function resetClock():Void
	{ // numero random para aparicion aleatoria
		clock = 1 + FlxG.random.float() * 300;
	}
	
	function get_disp():AlienBala 
	{
		return disp;
	}
}