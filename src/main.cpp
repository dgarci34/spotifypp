#include "SpotifyClient.h"

#include <iostream>


int main(int argc, char const *argv[])
{
    std::cout << "SPP: input your command" << std::endl;
    std::string input;

    SPP::SpotifyClient spotifyClient;
    while(std::getline(std::cin, input))
    {
        spotifyClient.handleCommand(input);

        if (spotifyClient.quitCalled())
            break;
    }
    return 0;
}
