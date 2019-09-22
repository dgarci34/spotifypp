#pragma once

#include "CommandHandler.h"

namespace SPP
{

class SpotifyClient
{
public:
    explicit SpotifyClient();
    ~SpotifyClient();

    void handleCommand(const std::string& command);
    bool quitCalled() const;

private:
    CommandHandler commandHandler_;
    bool quit_;
};

}