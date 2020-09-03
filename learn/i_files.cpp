#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ofstream file("hello.txt", std::ios::app);

    std::vector<std::string> names;
    names.push_back("Angel Dhakal");

    for(std::string name : names)
    {
        file << name << std::endl;
    }

    file.close();
}