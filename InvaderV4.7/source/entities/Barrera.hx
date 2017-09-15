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

class Barrera extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X, Y);
		loadGraphic(AssetPaths.barricade__png, true, 16, 8);
		animation.add("alien", [0, 0], 3, true);
		this.animation.play("alien");
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}