#include "Player.h"

Player::Player()
{
	playerTexture.loadFromFile("gfx/kirby.png");

	setTexture(&playerTexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(200, 200);
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	//Moving UP 
	if (input->isKeyDown(sf::Keyboard::W))
	{
		//input->setKeyUp(sf::Keyboard::W);
		velocity = sf::Vector2f(0, -100);
		move(velocity * dt);
	}

	//Moving Down
	if (input->isKeyDown(sf::Keyboard::S))
	{
		//input->setKeyUp(sf::Keyboard::S);
		velocity = sf::Vector2f(0, 100);
		move(velocity * dt);
	}

	//Moving Left
	if (input->isKeyDown(sf::Keyboard::A))
	{
		//input->setKeyUp(sf::Keyboard::A);
		velocity = sf::Vector2f(-100, 0);
		move(velocity * dt);
	}

	//Moving Right 
	if (input->isKeyDown(sf::Keyboard::D))
	{
		//input->setKeyUp(sf::Keyboard::D);
		velocity = sf::Vector2f(100, 0);
		move(velocity * dt);
	}
}
