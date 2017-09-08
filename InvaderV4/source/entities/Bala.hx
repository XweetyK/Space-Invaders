package entities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author GaspiDaspi
 */
class Bala extends FlxSprite 
{

	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		//Cargar Gráfico
		loadGraphic(AssetPaths.SpriteBala__png);
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		//Salir limite/Kill
		if (y < 0)
		{
		kill();
		}
	}
	
	override public function destroy():Void 
	{
		super.destroy();
	}
	
}