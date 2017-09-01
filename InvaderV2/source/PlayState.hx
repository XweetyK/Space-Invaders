package; 
 
import entities.Bala;
import entities.Nave;
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
  override public function create():Void 
  { 
    super.create(); 
     
    alien = new FlxTypedGroup<Alien>(); 
    var color:Array<Int>; 
    color = [FlxColor.BLUE, FlxColor.GREEN, FlxColor.GREEN, FlxColor.YELLOW, FlxColor.RED]; 
     
    for (i in 0...75) 
    { 
      var a = new Alien(50 + (i % 15) * 32, 24 + Std.int(i / 15) * 32, color[Std.int(i / 15)]); 
      alien.add(a); 
    } 
     player = new Nave(32, 16);
    add(alien); 
	add(player);

	
  } 
 
  override public function update(elapsed:Float):Void
  {
	  super.update(elapsed);
  }
  
}