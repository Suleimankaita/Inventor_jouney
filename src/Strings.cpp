#include <iostream>
#include <string>
#include <cctype>

std::string Method(std::string name,std::string target)
{
    for (char& c : name)
    {
        c = std::tolower(c);
    }

    return name;
}