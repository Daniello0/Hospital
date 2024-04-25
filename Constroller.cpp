#include <SFML/Graphics.hpp>
#include "iostream"
#include "Model.cpp"
using namespace std;
using namespace sf;

int main()
{
	ContextSettings settings;
	settings.antialiasingLevel = 8;
	Font font;
	font.loadFromFile("arial.ttf");
	RenderWindow window(VideoMode(2400, 1400), "SFML Works!", Style::Default, settings);
	while (window.isOpen())
	{
		Text text("Button", font, 40);
		text.setPosition(530, 520);

		Vector2i mousePos = Mouse::getPosition(window);

		Event event;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();

			if (Mouse::isButtonPressed(Mouse::Left))
			{
				cout << "Pressed!\n";
				window.draw(text);
			}
		}

		window.clear(Color::White);
		Button but;
		but.create_button();
		but.setPosition(Vector2f(500, 500));
		window.draw(but);
		window.display();
	}
	return 0;
}