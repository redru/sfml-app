#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Properties.hpp"

class Engine
{

public:
    Engine();

    void initialize();

    int start();

    static Properties& GetProperties()
    {
        static Properties props("game.conf");

        return props;
    }

private:


};
