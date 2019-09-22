#include "CommandHandler.h"

#include <iostream>

using namespace SPP;

CommandHandler::CommandHandler()
{

}

CommandHandler::~CommandHandler()
{

}

void CommandHandler::doCommand(const std::string& command)
{
    std::cout << command << " is not a recognized command" << std::endl;
}