#include "SpotifyClient.h"

#include <iostream>


int main(int argc, char const *argv[])
{
    std::cout << "SPP: input your command" << std::endl;
    std::string input;
    while(std::getline(std::cin, input))
    {
        if(input == "q")
        {
            std::cout << "quit" << std::endl;
        break;
    }
    else
        {
            std::cout << input << " is not a recognized command" << std::endl;
        }

    }
    return 0;
}
