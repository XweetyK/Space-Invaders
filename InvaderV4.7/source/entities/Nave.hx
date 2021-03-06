package entities;

/**
 * ...
 * @author Yo
 */
import entities.Bala;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.group.FlxGroup;
import flixel.system.FlxAssets.FlxGraphicAsset;

class Nave extends FlxSprite
{
	public var PlayerBala(get, null):Bala = new Bala();
	public var playerScore(get, null):Int;
	public function new(X:Int, Y:Int)
	{
		super(X, Y);
		//Cargar gráfico
		loadGraphic(AssetPaths.PlayerNave__png);
		//Crear y matar bala para poder revivirla
		FlxG.state.add(PlayerBala);
		PlayerBala.kill();
		//Setear score a 0
		playerScore = 0;
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		playerMove();
		playerShoot();
		playerLimit();
	}
	// No se sale del borde
	function playerLimit()
	{
		if (this.x < 0)
		{
			this.x = 0;
		}
		if (this.x > 144 + 8)
		{
			this.x = 144 + 8;
		}
	}
	// Disparar player
	function playerShoot()
	{
		if (FlxG.keys.justPressed.SPACE && !PlayerBala.alive)
		{
			PlayerBala.reset(this.x, this.y -3);
			// Velocidad Bala
			PlayerBala.velocity.y = Reg.velocidadBala;
		}
	}
	// Movimiento player
	function playerMove()
	{
		//Si ninguna, velocidad = 0.
		velocity.x = Reg.velocidadPlayerIDLE;
		
		if (FlxG.keys.pressed.RIGHT)
		{
			velocity.x = Reg.velocidadPlayerRIGHT;
		}
		if (FlxG.keys.pressed.LEFT)
		{
			velocity.x = Reg.velocidadPlayerLEFT;
		}
		if (FlxG.keys.pressed.RIGHT && FlxG.keys.pressed.LEFT)
		{
			velocity.x = Reg.velocidadPlayerIDLE;
		}
	}
	// Getter bala
	function get_PlayerBala():Bala 
	{
		return PlayerBala;
	}
	// Getter score
	function get_playerScore():Int 
	{
		return playerScore;
	}
	// Anadir score
	public function playerAddScore(points:Int):Void 
	{
		playerScore +=  points;
	}

}