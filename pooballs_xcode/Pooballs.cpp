#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Pooballs {
    public:
    Pooballs () {
        // Create the main window
        sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML window");
        sf::CircleShape shape(50);
        shape.setPosition(10, 50);
        
        // Start the game loop
        while (window.isOpen())
        {
            // Process events
            sf::Event event;
            while (window.pollEvent(event))
            {
                // Close window: exit
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
                
                // Escape pressed: exit
                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
                if (event.type == sf::Event::KeyPressed) {
                    if(event.key.code == sf::Keyboard::Up) {
                        sf::Vector2f position = shape.getPosition();
                        shape.setPosition(position.x + 25, position.y);
                    }
                }
            }
            
            // Clear screen
            window.clear(sf::Color::White);
            
            // set the shape color to green
            shape.setFillColor(sf::Color(0, 0, 0));
            window.draw(shape);
            
            // Update the window
            window.display();
        }
    }
    void gameLoop() {
        
    }
};
