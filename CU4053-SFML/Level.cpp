#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	p1.setInput(in);

	e1.setWindow(hwnd);
	e1Texture.loadFromFile("gfx/Goomba.png");
	e1.setTexture(&e1Texture);
	e1.setSize(sf::Vector2f(100, 100));
	e1.setPosition(500, 100);

	e2.setWindow(hwnd);
	e2Texture.loadFromFile("gfx/Beach_Ball.png");
	e2.setTexture(&e2Texture);
	e2.setSize(sf::Vector2f(100, 100));
	e2.setPosition(600, 300);

	mousePointer.setInput(in);
	window->setMouseCursorVisible(false);

	bg.setInput(input);
	bg.setWindow(window);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	p1.handleInput(dt);

	bg.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	e1.update(dt);
	e2.update(dt);
	mousePointer.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(bg);
	//window->draw(testSprite);
	window->draw(p1); 
	window->draw(e1);
	window->draw(e2);
	window->draw(mousePointer);
	endDraw();
}
