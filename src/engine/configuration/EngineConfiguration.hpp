#pragma once
#include <iostream>

class EngineConfiguration
{

public:
    EngineConfiguration(int fps = 30) : fps(fps), frameTime(1000 / fps) { }

    void printConfiguration()
    {
        std::cout << "\tfps: " << fps << std::endl;
        std::cout << "\tframe time: " << frameTime << std::endl;
    }

    void setFps(int _fps)
    {
        fps = _fps;
        frameTime = 1000 / fps;
    }

    int getFps() { return fps; }

    int getFrameTime() { return frameTime; }

private:
    int fps;
    float frameTime;

};
