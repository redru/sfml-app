#include "Engine.hpp"

void Engine::initialize()
{
    std::cout << "[Engine] Initializing..." << std::endl;
    std::cout << "[Engine] Configuration:" << std::endl;
    configuration.printConfiguration();
}

int Engine::start()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML-APP");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::Clock clock;

    while (window.isOpen())
    {
        // Get elapsed time
        elapsedTime = clock.getElapsedTime().asMilliseconds();

        // Check if we must update game
        if (elapsedTime >= configuration.getFrameTime())
        {
            // Restart clock
            clock.restart();
s
            // Handle window events
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
    
            // Redraw
            window.clear();
            window.draw(shape);
            window.display();
        }        
    }

    return 0;
}
