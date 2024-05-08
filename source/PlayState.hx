package;

import Char;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxExtendedSprite;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import flixel.math.FlxAngle;
import flixel.util.FlxTimer;

class PlayState extends FlxState
{
	var ground:FlxSprite;
	var mfbackdrop:FlxBackdrop;
	var char:Char;
	var shit:FlxSprite;
	var shitCam:FlxCamera;
	var bullet:FlxSprite;
	var hand:FlxSprite;

	override public function create()
	{
		super.create();

		shitCam = new FlxCamera(0, 0, 1280, 720);
		mfbackdrop = new FlxBackdrop();
		mfbackdrop.loadGraphic("assets/images/drawers.png");
		// mfbackdrop.velocity.set(50, 50);
		mfbackdrop.scrollFactor.set(.33, .33);
		add(mfbackdrop);
		ground = new FlxSprite().makeGraphic(2000, 300);
		ground.color = 0xFF222222;
		add(ground);

		shit = new FlxSprite().loadGraphic("assets/images/shit.png");
		shit.x = 640;
		shit.y = 500;
		shit.color = 0xFF4F4F4F;
		add(shit);

		char = new Char(0, 500);
		add(char);
		hand = new FlxSprite().loadGraphic("assets/images/hand.png");
		hand.scale.set(0.1, 0.1);
		add(hand);
		FlxG.camera.follow(char, FlxCameraFollowStyle.TOPDOWN);

		bullet = new FlxSprite().loadGraphic("assets/images/bulet.png");
		bullet.scale.set(3, 3);
		add(bullet);

		// bullet2 = new FlxSprite().loadGraphic("assets/images/bulet.png");
		// bullet2.scale.set(3, 3);
		// add(bullet2);

		// bullet3 = new FlxSprite().loadGraphic("assets/images/bulet.png");
		// bullet3.scale.set(3, 3);
		// add(bullet3);

		// bullet4 = new FlxSprite().loadGraphic("assets/images/bulet.png");
		// bullet4.scale.set(3, 3);
		// add(bullet4);

		// bullet4 = new FlxSprite().loadGraphic("assets/images/bulet.png");
		// bullet4.scale.set(3, 3);
		// add(bullet4);

		// bullet4 = new FlxSprite().loadGraphic("assets/images/bulet.png");
		// bullet4.scale.set(3, 3);
		// add(bullet);

		// bullet4 = new FlxSprite().loadGraphic("assets/images/bulet.png");
		// bullet4.scale.set(3, 3);
		// add(bullet);

		ground.y = char.y + char.height;
	}

	var pressingA:Bool = false;
	var pressingD:Bool = false;
	var pressingShift:Bool = false;
	var lastfacing:String = "right";

	override function update(_elapsed:Float)
	{
		ground.x = char.x - 1000;

		if (FlxG.keys.justPressed.SPACE)
		{
			shoot();
		}
		if (FlxG.keys.justPressed.A)
		{
			char.flipX = true;
			lastfacing = "left";
			pressingA = true;
		}
		if (FlxG.keys.justReleased.A)
		{
			pressingA = false;
		}
		if (FlxG.keys.justPressed.D)
		{
			char.flipX = false;
			pressingD = true;
			lastfacing = "right";
		}
		if (FlxG.keys.justReleased.D)
		{
			pressingD = false;
		}
		if (FlxG.keys.justPressed.SHIFT)
		{
			pressingShift = true;
		}
		if (FlxG.keys.justReleased.SHIFT)
		{
			pressingShift = false;
		}

		if (pressingA == true && pressingD == false && pressingShift == false)
		{
			char.x -= 5;
		}
		if (pressingD == true && pressingA == false && pressingShift == false)
		{
			char.x += 5;
		}
		if (pressingA == true && pressingD == false && pressingShift == true)
		{
			char.x -= 10;
		}
		if (pressingD == true && pressingA == false && pressingShift == true)
		{
			char.x += 10;
		}

		shitCam.x = -char.x;

		if (FlxG.mouse.overlaps(shit) && !FlxG.mouse.overlaps(char))
		{
			if (FlxG.mouse.justReleased)
			{
				trace('uhhhhhAAAAAAAAAAAAAAAa');
				FlxG.sound.play('assets/sounds/uwudaddy.ogg');
			}
		}
		hand.y = 200;
		if (lastfacing == "left")
		{
			hand.flipX = false;
			hand.x = char.x - 528;
		}
		else
		{
			hand.x = char.x - 307;
			hand.flipX = true;
		}
	}

	var canshoot:Bool = true;

	function shoot()
	{
		bullet.alpha = 1;

		new FlxTimer().start(0.5, function(tmr:FlxTimer)
		{
			bullet.alpha = 0;
		});
		// if (canshoot == true)
		// {
		// 	switch (lastfacing)
		// 	{
		// 		case "left":
		// 			bullet.x = char.x - 100;
		// 			bullet.flipX = true;
		// 			FlxTween.tween(bullet, {x: bullet.x - 4000}, 0.5, {ease: FlxEase.linear});
		// 		case "right":
		// 			bullet.x = char.x + 200;
		// 			bullet.flipX = false;
		// 			FlxTween.tween(bullet, {x: bullet.x + 4000}, 0.5, {ease: FlxEase.linear});
		// 	}
		// }

		if (canshoot == true)
		{
			var shitY:Float = 0;
			var shitX:Float = 0;
			if(FlxG.mouse.x > FlxG.width / 2){
				 shitX = -1000;
			}
			if(FlxG.mouse.x < FlxG.width / 2){
				 shitX = 1000;
			}
			if(FlxG.mouse.y > FlxG.height / 2){
				 shitY = 1000;
			}
			if(FlxG.mouse.y < FlxG.height / 2){
				 shitY = -1000;
			}
			
			
            bullet.x = char.x;
			bullet.y = char.y;
			FlxTween.tween(bullet, {x:  shitX + FlxG.mouse.x, y: shitY + FlxG.mouse.y}, 0.5, {ease: FlxEase.linear});
			bullet.angle = FlxAngle.angleBetweenMouse(char, true);

		}

		canshoot = false;
		new FlxTimer().start(0.6, function(tmr:FlxTimer)
		{
			canshoot = true;
		});
	}
}
