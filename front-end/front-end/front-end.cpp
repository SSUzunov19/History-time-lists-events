#include<SFML/Graphics.hpp> 
#include <iostream>
#include<windows.h>
using namespace std;
using namespace sf;
RenderWindow window(VideoMode(1000, 800), "Helpopedia");
void backToMenu(int* ptr1, Event event, Text* textOne)
{
	if (Mouse::getPosition(window).x > 0 && Mouse::getPosition(window).x < (*textOne).getCharacterSize() * 2.25 && Mouse::getPosition(window).y>770 && Mouse::getPosition(window).y < 800)
	{
		(*textOne).setFillColor(Color::White);
		if (event.type == Event::MouseButtonPressed)
		{
			if (event.mouseButton.button == Mouse::Left)
			{
				*ptr1 = 0;
			}
		}
	}
	else
	{
		(*textOne).setFillColor(Color::Black);
	}
}

void currentLocation(int* ptr, int n, Event event, Text* textOne)
{
	(*textOne).setFillColor(Color::White);
	if (event.type == Event::MouseButtonPressed)
	{
		if (event.mouseButton.button == Mouse::Left)
		{
			*ptr = n;
		}
	}
}
int main()
{
	int location = 0;
	Texture tex1, tex2;
	Sprite s1(tex1), s2(tex2);
	Font f1;
	f1.loadFromFile("Pacifico-Regular.ttf");

	Text text1, text2, text3, text4, text5, text, text6, text7, text8, text9;
	text1.setFont(f1);
	text1.setCharacterSize(40);
	text1.setString("Events");
	text1.setPosition(window.getSize().x / 2 - 50, 500);
	text1.setFillColor(Color::Black);

	text2.setFont(f1);
	text2.setCharacterSize(40);
	text2.setString("Create");
	text2.setPosition(window.getSize().x / 2 - 50, 550);
	text2.setFillColor(Color::Black);

	text3.setFont(f1);
	text3.setCharacterSize(40);
	text3.setString("Game");
	text3.setPosition(window.getSize().x / 2 - 55, 600);
	text3.setFillColor(Color::Black);

	text4.setFont(f1);
	text4.setCharacterSize(40);
	text4.setString("About us");
	text4.setPosition(window.getSize().x / 2 - 65, 650);
	text4.setFillColor(Color::Black);

	text5.setFont(f1);
	text5.setCharacterSize(40);
	text5.setString("Quit");
	text5.setPosition(window.getSize().x / 2 - 50, 700);
	text5.setFillColor(Color::Black);

	text6.setFont(f1);
	text6.setString("Back");
	text6.setCharacterSize(30);
	text6.setPosition(0, 770);
	text6.setFillColor(Color::Color(210, 210, 210, 255));




	text7.setFont(f1);
	text7.setCharacterSize(20);
	text7.setString("Create");
	text7.setPosition(window.getSize().x / 2 - 50, 100);
	text7.setFillColor(Color::Color(210, 210, 210, 255));

	text8.setFont(f1);
	text8.setCharacterSize(20);
	text8.setString("Delete");
	text8.setPosition(window.getSize().x / 2 - 50, 140);
	text8.setFillColor(Color::Color(210, 210, 210, 255));

	text9.setFont(f1);
	text9.setCharacterSize(20);
	text9.setString("Stas");
	text9.setPosition(window.getSize().x / 2 - 50, 180);
	text9.setFillColor(Color::Color(210, 210, 210, 255));

	tex1.loadFromFile("Logo.png");
	tex2.loadFromFile("Screenshot 2022-01-30 180704_auto_x2-modified.png");

	int fu1 = 50, fu2 = 90, fu = 2;

	RectangleShape rectangle(Vector2f(900, 450)), rectangle1(Vector2f(300, 250)),
		rectangle2(Vector2f(200, 250)), rectangle3(Vector2f(200, 250)),
		rectangle4(Vector2f(140, 250)), rectangle5(Vector2f(window.getSize().x - 100, 40)), rectangle6(Vector2f(window.getSize().x - 100, 120));
	rectangle.setFillColor(Color::Black);
	rectangle.setPosition(50, 50);

	rectangle1.setFillColor(Color::Black);
	rectangle1.setPosition(50, 520);

	rectangle2.setFillColor(Color::Black);
	rectangle2.setPosition(370, 520);

	rectangle3.setFillColor(Color::Black);
	rectangle3.setPosition(590, 520);

	rectangle4.setFillColor(Color::Black);
	rectangle4.setPosition(810, 520);

	rectangle5.setFillColor(Color::Color(150, 150, 150, 255));
	rectangle5.setPosition(50, 50);

	rectangle6.setFillColor(Color::Color(170, 170, 170, 255));
	rectangle6.setPosition(50, 90);

	s1.setTextureRect(IntRect(10, 10, 486, 500));
	s2.setTextureRect(IntRect(10, 10, 1300, 1300));
	s1.setPosition(window.getSize().x / 2 - tex1.getSize().x / 2, 0);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color(210, 210, 210, 255));
		if (location == 0)
		{
			window.draw(s2);
			window.draw(s1);
			window.draw(text1);
			window.draw(text2);
			window.draw(text3);
			window.draw(text4);
			window.draw(text5);

			//text1
			if (Mouse::getPosition(window).x > window.getSize().x / 2 - text1.getCharacterSize() * 1.25 &&
				Mouse::getPosition(window).x < window.getSize().x / 2 + text1.getCharacterSize() * 1.75 &&
				Mouse::getPosition(window).y > 500 && Mouse::getPosition(window).y < 545)
			{
				currentLocation(&location, 1, event, &text1);
			}
			else
			{
				text1.setFillColor(Color::Black);
			}

			//text2
			if (Mouse::getPosition(window).x > window.getSize().x / 2 - text2.getCharacterSize() * 1.25 &&
				Mouse::getPosition(window).x < window.getSize().x / 2 + text2.getCharacterSize() * 1.75 &&
				Mouse::getPosition(window).y > 550 && Mouse::getPosition(window).y < 590)
			{
				currentLocation(&location, 2, event, &text2);
			}
			else
			{
				text2.setFillColor(Color::Black);
			}

			//text3
			if (Mouse::getPosition(window).x > window.getSize().x / 2 - text3.getCharacterSize() * 1.25 &&
				Mouse::getPosition(window).x < window.getSize().x / 2 + text3.getCharacterSize() * 1.75 &&
				Mouse::getPosition(window).y > 600 && Mouse::getPosition(window).y < 640)
			{
				currentLocation(&location, 3, event, &text3);
			}
			else
			{
				text3.setFillColor(Color::Black);
			}

			//text4
			if (Mouse::getPosition(window).x > window.getSize().x / 2 - text4.getCharacterSize() * 1.25 &&
				Mouse::getPosition(window).x < window.getSize().x / 2 + text4.getCharacterSize() * 1.75 &&
				Mouse::getPosition(window).y > 650 && Mouse::getPosition(window).y < 690)
			{
				currentLocation(&location, 4, event, &text4);
			}
			else
			{
				text4.setFillColor(Color::Black);
			}

			//text5
			if (Mouse::getPosition(window).x > window.getSize().x / 2 - text5.getCharacterSize() * 1.25 &&
				Mouse::getPosition(window).x < window.getSize().x / 2 + text5.getCharacterSize() * 1.75 &&
				Mouse::getPosition(window).y > 700 && Mouse::getPosition(window).y < 740)
			{
				currentLocation(&location, 5, event, &text5);
			}
			else
			{
				text5.setFillColor(Color::Black);
			}
		}
		else
		{
			switch (location)
			{
			case 1:
				backToMenu(&location, event, &text6);
				window.draw(rectangle);
				window.draw(rectangle1);
				window.draw(rectangle2);
				window.draw(rectangle3);
				window.draw(rectangle4);
				window.draw(text6);
				break;
			case 2:
				window.draw(rectangle5);
				if (Mouse::getPosition(window).x > 50 && Mouse::getPosition(window).x < window.getSize().x - 50 &&
					Mouse::getPosition(window).y>fu1 && Mouse::getPosition(window).y < fu2)
				{
					fu = 1;
					fu2 = 210;
					if (fu)
					{
						window.draw(rectangle6);
						window.draw(text7);
						window.draw(text8);
						window.draw(text9);
					}
				}
				else
				{
					fu = 0;
					fu2 = 90;
				}
				window.draw(text6);
				backToMenu(&location, event, &text6);
				break;
			case 3:
				window.draw(text6);
				backToMenu(&location, event, &text6);
				break;
			case 4:
				window.draw(text6);
				backToMenu(&location, event, &text6);
				break;
			case 5:
				window.close();
				break;
			}
		}
		cout << Mouse::getPosition(window).y << " " << text1.getCharacterSize() << endl;
		window.display();
	}
	return 0;
}