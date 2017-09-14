package entities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import entities.Alien;
import Reg;

/**
 * ...
 * @author chikoritos
 */
class AlienBala extends FlxSprite 
{
	
	public function new(?X:Int, ?Y:Int, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		//grafico disparo
		loadGraphic(AssetPaths.disp__png, true, 4, 4);
		//velocidad disparo
		velocity.y = 30;
		//animacion disparo
		animation.add("alien", [0, 1, 0, 1], 3, true);
		this.animation.play("alien");
		updateHitbox();
	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		if (y > FlxG.height)
		{
			//destructor y contador de disparos
			destroy();
			Reg.balaCont--;
		}
	}
	override public function destroy():Void
	{
		FlxG.state.remove(this);
		//copiar es aprender ?????
		super.destroy();
	}
}