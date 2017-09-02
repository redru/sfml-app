#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "configuration/EngineConfiguration.hpp"

class Engine
{

public:
    void initialize();

    int start();

    void setConfiguration(EngineConfiguration _configuration) { configuration = _configuration; }

    EngineConfiguration getConfiguration() { return configuration; }

private:
    EngineConfiguration configuration;
    sf::Int32 elapsedTime;
    // ================================================================================

    // Singleton class configuration
public:
    static Engine& getInstance()
    {
        static Engine instance;

        return instance;
    }
private:
    Engine() {}

public:
    Engine(Engine const&)           = delete;
    void operator=(Engine const&)   = delete;

};
