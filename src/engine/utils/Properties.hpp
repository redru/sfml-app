#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class Properties
{

public:
    Properties(const char* file);

    std::string getString();

    int getInt();

private:
    std::string file;
    std::map<std::string, int> intProps;
    std::map<std::string, std::string> strProps;

};
