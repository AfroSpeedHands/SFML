#pragma once
#include <SFML/Graphics.hpp>
class Game
{
public:

	public:
		Game();
		void run();

	private:
		void processEvents();
		void update(sf::Time deltaTime);
		void render();
		void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

	private:
		sf::RenderWindow mWindow;
		sf::CircleShape mPlayer;
		
		bool mIsMovingUp;
		bool mIsMovingDown;
		bool mIsMovingLeft;
		bool mIsMovingRight;
	
};

