#include <iostream>
#include "engine/Engine.hpp"
#include "engine/configuration/EngineConfiguration.hpp"

int main()
{
    std::cout << "sfml-app starting..." << std::endl;

    EngineConfiguration configuration(60);

    Engine& engine(Engine::getInstance());
    engine.initialize();
    engine.start();

    return 0;
}
