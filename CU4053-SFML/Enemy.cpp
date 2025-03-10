#include "Enemy.h"

Enemy::Enemy()
{

	velocity = sf::Vector2f(500, 0);
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	move(velocity*dt);
	if (getPosition().x > window->getSize().x - getSize().x)
	{
		velocity = sf::Vector2f(-500, 0);
	}
	if (getPosition().x < 0)
	{
		velocity = sf::Vector2f(500, 0);
	}
}
