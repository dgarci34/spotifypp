#include "SpotifyClient.h"

using namespace SPP;

SpotifyClient::SpotifyClient()
    : quit_(false)
{
}

SpotifyClient::~SpotifyClient()
{
}

bool SpotifyClient::quitCalled() const
{
    return quit_;
}

void SpotifyClient::handleCommand(const std::string& command)
{
    if (command == "q" || command == "Q")
    {
        quit_ = true;
        return;
    }
    commandHandler_.doCommand(command);
}