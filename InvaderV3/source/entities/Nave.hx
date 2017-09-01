package entities;

/**
 * ...
 * @author ...
 */
import entities.Bala;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject; 
import flixel.group.FlxGroup;
import flixel.system.FlxAssets.FlxGraphicAsset;
 
class Nave extends FlxSprite
{
	var Playerbala:Bala = new Bala();
	public function new(X:Int, Y:Int) 
	{
		super(X, Y);
		loadGraphic(AssetPaths.PlayerNave__png, false , 8, 8);
		FlxG.state.add(Playerbala);
		Playerbala.kill();
	}
	
	override public function update(elapsed:Float):Void
  {
	  super.update(elapsed);
	  playerMove();
	  playerShoot();
  }
  
  function playerShoot() 
  {
	  if (FlxG.keys.justPressed.SPACE && !Playerbala.alive)
	  {
			Playerbala.reset(this.x, this.y -3);
			Playerbala.velocity.y = -60;
	  }
  }
  
  function playerMove() 
  {
	  velocity.x = 0;
	  if (FlxG.keys.pressed.RIGHT)
	  {
		  velocity.x = 30;
	  }
	  if (FlxG.keys.pressed.LEFT)
	  {
		velocity.x = -30;  
	  }
	  if (FlxG.keys.pressed.RIGHT && FlxG.keys.pressed.LEFT)
	  {
		  velocity.x = 0;
	  }
  }
	
}