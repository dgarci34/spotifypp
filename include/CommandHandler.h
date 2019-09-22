#pragma once

#include <string>

namespace SPP
{

class CommandHandler
{
public:
    CommandHandler();
    ~CommandHandler();

    void doCommand(const std::string& command);

    bool isDisplayCommand(const std::string& command) const;
    void doDisplayCommand();
};

}
