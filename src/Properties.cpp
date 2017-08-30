#include "Properties.hpp"

Properties::Properties(const char* file) : file(file)
{
    std::cout << "[Properties] Loading properties file " << file << std::endl;
    std::ifstream propfile(file);

    std::string line, key, complexvalue, value, type;
    while(std::getline(propfile, line))
    {
        std::cout << "[Properties] --> " << line << std::endl;
        std::istringstream ss(line);
        std::getline(ss, key, '=');
        std::getline(ss, complexvalue);
        
        std::istringstream ss2(complexvalue);
        std::getline(ss2, value, '|');
        std::getline(ss2, type);

        if (type == "int")
        {
            intProps.insert(std::pair<std::string, int>(key, std::stoi(value)));
        }
        else
        {
            strProps.insert(std::pair<std::string, std::string>(key, value));
        }
    }
}

std::string Properties::getString()
{
    return "";
}

int Properties::getInt()
{
    return 0;
}
