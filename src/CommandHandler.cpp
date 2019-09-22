#include "CommandHandler.h"

#include <iostream>

using namespace SPP;

struct SongInformation
{
    std::string artist_;
    std::string album_;
    std::string name_;
};

CommandHandler::CommandHandler()
{

}

CommandHandler::~CommandHandler()
{

}

void CommandHandler::doCommand(const std::string& command)
{
    if (isDisplayCommand(command))
        doDisplayCommand();
    else
        std::cout << command << " is not a recognized command" << std::endl;
}

bool CommandHandler::isDisplayCommand(const std::string& command) const
{
    return command == "d" || command == "Display";
}

void CommandHandler::doDisplayCommand()
{
    SongInformation songInfo;
    //TODO: queue for currently playing into struct
    std::cout << "Artist: " << songInfo.artist_ << " Album: " << songInfo.album_ << " Song: " << songInfo.name_ << std::endl;
}