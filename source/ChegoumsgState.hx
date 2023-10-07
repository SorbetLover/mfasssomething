package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class ChegoumsgState extends FlxState
{
	var mfbackdrop:FlxBackdrop;
	var aaaa:Bool = true;

	override public function create()
	{
		super.create();

		mfbackdrop = new FlxBackdrop();
		mfbackdrop.loadGraphic("assets/images/chegoumsg.png");
		mfbackdrop.repeatAxes = X;
		mfbackdrop.velocity.set(100, 100);
		mfbackdrop.spacing.x = 100;
		mfbackdrop.scale.set(5, 5);
		mfbackdrop.screenCenter(XY);
		add(mfbackdrop);
		FlxG.sound.playMusic("assets/music/chegoumsgogg.ogg", 1);
		startmovements();
	}

	override function update(_elapsed:Float)
	{
		aaaa = true;
		if (FlxG.keys.justPressed.ESCAPE)
		{
			FlxG.sound.music.destroy();
			FlxG.switchState(new MainMenu());
		}
	}

	function startmovements()
	{
		mfbackdrop.x += 10;
		new FlxTimer().start(0.001, function(tmr:FlxTimer)
		{
			startmovements();
		});
	}
}
