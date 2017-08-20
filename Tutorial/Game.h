#pragma once
#include <SFML/Graphics.hpp>
#include "stdafx.h"
#include "Game.h"
#include "TextureHolder.h"
using namespace Textures;

class Game
{
public:

	public:
							Game();
		void				run();

	private:
		void				processEvents();
		void				update(sf::Time deltaTime);
		void				render();
		void				handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

		

	private:
		sf::RenderWindow	mWindow;
		sf::Texture			mTexture;
		sf::Sprite			mPlayer;
		TextureHolder		textures;
	
		sf::Time TimePerFrame = sf::seconds(1.f / 60.f);

		bool mIsMovingUp;
		bool mIsMovingDown;
		bool mIsMovingLeft;
		bool mIsMovingRight;

		float speed = 100;
};

