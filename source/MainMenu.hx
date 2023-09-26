package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class MainMenu extends FlxState
{
	var sprite:FlxSprite;
	var playst:FlxText;
	var playst2:FlxText;
	var thingscaled:Bool = false;
	var thingselected:Float = 1;
	var defaulty:Float = 353;
	var screenfadething:FlxSprite;

	override public function create()
	{
		sprite = new FlxSprite();
		sprite.loadGraphic("assets/images/drawers.png");
		sprite.screenCenter(XY);
		sprite.scale.set(1, 1);
		add(sprite);

		playst = new FlxText(0, 0, 0, "PlayState");
		playst.screenCenter(XY);

		playst.scale.set(5, 5);
		playst.alpha = 1;
		add(playst);

		playst2 = new FlxText(0, 0, 0, "chegoumsg");
		playst2.screenCenter(XY);

		playst2.scale.set(5, 5);
		playst2.alpha = 1;
		add(playst2);
		changeselection();
		trace(playst.y);

		screenfadething = new FlxSprite();
		screenfadething.makeGraphic(3000, 3000, '000000');
		screenfadething.screenCenter(XY);
		screenfadething.alpha = 0;
		add(screenfadething);
	}

	override function update(_elapsed:Float)
	{
		if (FlxG.keys.justPressed.C)
		{
			FlxG.switchState(new HaxeMenu());
		}
		if (FlxG.keys.justPressed.W)
		{
			thingselected = thingselected - 1;
			changeselection();
		}
		if (FlxG.keys.justPressed.S)
		{
			thingselected = thingselected + 1;
			changeselection();
		}
		if (FlxG.keys.justPressed.ENTER)
		{
			switch (thingselected)
			{
				case 1:
					FlxTween.tween(screenfadething, {alpha: 1}, 0.2, {
						ease: FlxEase.cubeOut,
						onComplete: _ ->
						{
							FlxG.switchState(new PlayState());
						}
					});

				case 2:
					FlxTween.tween(screenfadething, {alpha: 1}, 0.2, {
						ease: FlxEase.cubeOut,
						onComplete: _ ->
						{
							FlxG.switchState(new ChegoumsgState());
						}
					});
			}
		}
	}

	function changeselection()
	{
		switch (thingselected)
		{
			case 1:
				FlxTween.tween(playst, {y: defaulty, "scale.x": 6, "scale.y": 6}, 0.5, {ease: FlxEase.cubeInOut});
				FlxTween.tween(playst2, {y: defaulty + 100, "scale.x": 5, "scale.y": 5}, 0.5, {ease: FlxEase.cubeInOut});
			case 2:
				FlxTween.tween(playst, {y: defaulty - 100, "scale.x": 5, "scale.y": 5}, 0.5, {ease: FlxEase.cubeInOut});
				FlxTween.tween(playst2, {y: defaulty, "scale.x": 6, "scale.y": 6}, 0.5, {ease: FlxEase.cubeInOut});
		}
	}
}
