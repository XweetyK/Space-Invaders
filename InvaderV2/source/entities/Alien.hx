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
	private var dispClock:Float;
	private var origen:Int;
	
	public function new(X:Int, Y:Int, Color:Int)
	{
		super(X, Y);
		
		loadGraphic(AssetPaths.test__png, true, 32, 32);
		color = Color;
		
		animation.add("alien", [0, 1, 0, 1], 3, true);
		this.animation.play("alien");
		
		origen = X;
		velocity.x = 20;
	}
	override public function update(elapsed:Float):Void
	{
		if (x < origen - 20)
		{
			x = origen - 20;
			velocity.x = -velocity.x;
			y = y + 5;
		}
		if (x > origen + 80)
		{
			x = origen + 80;
			velocity.x = -velocity.x;
		}
		if (x == origen + 80)
		{
			y = y + 5;
		}
		
		super.update(elapsed);
	}
}