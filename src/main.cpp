#include <iostream>
#include "engine/Engine.hpp"

int main()
{
    std::cout << "sfml-app starting..." << std::endl;

    Engine engine;
    engine.initialize();
    engine.start();

    return 0;
}
