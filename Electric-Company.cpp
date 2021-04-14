
#include <iostream>
#include<SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Play Card");
	sf::Font font;
	if (!font.loadFromFile("C:/Users/DEEPAK GOYAL/Downloads/Champagne & Limousines.ttf"))
	{
		return 1;
	}

	sf::Text text1;
	text1.setFont(font);
	text1.setString("Electric Company");
	text1.setPosition(330, 20);
	text1.setFillColor(sf::Color::Black);
	text1.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Text text2;
	text2.setFont(font);
	text2.setString("Cost : $150");
	text2.setPosition(330, 60);
	text2.setFillColor(sf::Color::Black);
	text2.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Texture texture;
	if (!texture.loadFromFile("C:/Users/DEEPAK GOYAL/Desktop/electric-company.png")) {
		return 0;
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(330.f, 140.f));


	sf::Text text3;
	text3.setFont(font);
	text3.setString("If one utility is owned the rent is 4\ntimes the number on die.\nIf both the utilities are owned the \nrent is 10 times the number on die.\n\nMortage value : $75");
	text3.setPosition(220, 350);
	text3.setFillColor(sf::Color::Black);

	sf::RectangleShape rect2(sf::Vector2f(400.f, 570.f));
	rect2.setPosition(200, 10);
	rect2.setOutlineThickness(5);
	rect2.setOutlineColor(sf::Color::White);

	sf::RectangleShape rect3(sf::Vector2f(100, 50));
	rect3.setPosition(50, 300);
	rect3.setOutlineThickness(5);
	rect3.setOutlineColor(sf::Color::White);
	rect3.setFillColor(sf::Color(255, 10, 100));

	sf::RectangleShape rect4(sf::Vector2f(100, 50));
	rect4.setPosition(650, 300);
	rect4.setOutlineThickness(5);
	rect4.setOutlineColor(sf::Color::White);
	rect4.setFillColor(sf::Color(255,10,100));

	sf::Text text4;
	text4.setFont(font);
	text4.setString("BUY");
	text4.setPosition(70, 305);
	text4.setStyle(sf::Text::Bold);

	sf::Text text5;
	text5.setFont(font);
	text5.setString("LEAVE");
	text5.setPosition(660, 305);
	text5.setStyle(sf::Text::Bold);


	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {

				window.close();
			}
			if ((sf::Mouse::getPosition(window).x >= 45 && sf::Mouse::getPosition(window).x <= 150) && (sf::Mouse::getPosition(window).y >= 295 && sf::Mouse::getPosition(window).y <= 355)) {

				if (event.type == sf::Event::MouseButtonPressed) {
					if (event.mouseButton.button == sf::Mouse::Left) {
						//enter the buying details
					
					}
				}

			}
			if ((sf::Mouse::getPosition(window).x >= 645 && sf::Mouse::getPosition(window).x <= 750) && (sf::Mouse::getPosition(window).y >= 295 && sf::Mouse::getPosition(window).y <= 355)) {

				if (event.type == sf::Event::MouseButtonPressed) {
					if (event.mouseButton.button == sf::Mouse::Left) {
						//enter the leaving details
					
					}
				}

			}

		}
		window.clear();

		window.draw(rect2);
		window.draw(text1);
		window.draw(text2);
		window.draw(sprite);
		window.draw(text3);
		window.draw(rect3);
		window.draw(rect4);
		window.draw(text4);
		window.draw(text5);
		
		window.display();
		
	}
}
