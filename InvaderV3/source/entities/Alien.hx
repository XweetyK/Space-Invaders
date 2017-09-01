package entities;

/**
 * ...
 * @author Chikoritos
 */

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.system.FlxAssets.FlxGraphicAsset;

class Alien extends FlxSprite
{
	private var origen:Int;
	private var dispClock:Float;
	
	public function new(X:Int, Y:Int, Color:Int)
	{
		super(X, Y);
		
		loadGraphic(AssetPaths.test__png, true, 8, 8);
		color = Color;
		
		animation.add("alien", [0, 1, 0, 1], 3, true);
		this.animation.play("alien");
		
		origen = X;
		velocity.x = 15;
	}
	
	override public function update(elapsed:Float):Void
	{
		if (x < origen - 5)
		{
			x = origen - 5;
			velocity.x = -velocity.x;
			y = y + 5;
		}
		if (x > origen + 48)
		{
			x = origen + 48;
			velocity.x = -velocity.x;
			y = y + 5;
		}
		super.update(elapsed);
	}
	
}