/**
 * @file main.cpp
 * @author Ivan Mercep
 * @brief 
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "core.hpp"
#include "config.hpp"
#include "log.hpp"
#include <iostream>

int main(int argc, char **argv) 
{
    Log::init_console_file(); // Initialize logger
    if(argc != 1) 
    {
        LOGCRITICAL("{} takes no arguments", argv[0]);
        return 1;
    }
    Config::init(); // initialize config
    Config::print();
    LOGINFO(CONF("test"));
    LOGINFO("{}", CONF("myInt"));
    LOGINFO("{}", CONF("myFloat"));
    
    LOGINFO("This is project {}", APP_NAME);
    return 0;
}
