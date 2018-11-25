// Name:
// Title:
// Purpose:

#include "stdafx.h"
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<iostream>

int main()
{
	sf::RenderWindow win(sf::VideoMode(1000, 1000), "Template");
	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				win.close();
			}
		}
		win.clear(sf::Color::Black);
		win.display();
	}
    return 0;
}

