#include "Game.h"
 
//Static Functions
 
//Initializer Functions

void Game::initWindow()

{

    /*creates a SFML window using options from window.init file*/

    this->window = new sf::RenderWindow (sf::VideoMode({ 800, 600 }), "SWORD ART ONLINE");

}
 
//Contructors/Destructors
 
Game::Game()

{

    this->initWindow();

}
 
Game::~Game()

{

    delete this->window;

}
 
//Functions
 
void Game::updateSFMLEvents()

{

    while (const std::optional event = this->window->pollEvent())

    {

        if (event->is<sf::Event::Closed>())

            this->window->close();

    }

}
 
void Game::update()

{

    this->updateSFMLEvents();

}
 
void Game::render()

{

    this->window->clear();
 
    //Render Items
 
    this->window->display();

}
 
void Game::run()

{

    while (this->window->isOpen())

    {

        this->update();

        this->render();

    }

}
 
