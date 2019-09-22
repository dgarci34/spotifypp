#pragma once

#include "CommandHandler.h"

#include <string>

namespace SPP
{

class SpotifyClient
{
public:
    explicit SpotifyClient();
    ~SpotifyClient();

    void handleCommand(const std::string& command);

private:
    CommandHandler commandHandler_;

};

}