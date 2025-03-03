#include "Player.h"

Player::Player()
{
	playerTexture.loadFromFile("gfx/Mushroom.png");

		setTexture(&playerTexture);
	setSize(sf::Vector2f(90, 90));
	setPosition(100, 100);

	
}

		
	

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	velocity.x = 0.0f;
	velocity.y = 0.0f;

	//moving left
	if (input->isKeyDown(sf::Keyboard::A)) {
		velocity.x = -100.f;
		velocity.y = 0.0f;
	}
	//moving right
	if (input->isKeyDown(sf::Keyboard::D)) {
		velocity.x = 100.f;
		velocity.y = 0.0f;
	}
	//moving UP
	if (input->isKeyDown(sf::Keyboard::W)) {
		velocity.y = -100.f;
		velocity.x = 00.0f;
	}
	//moving DOWN
	if (input->isKeyDown(sf::Keyboard::S)) {
		velocity.y = 100.f;
		velocity.x = 0.0f;
	}
	move(velocity * dt);
}
