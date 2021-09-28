#include "core.hpp"
#include "config.hpp"
#include "log.hpp"
#include <iostream>

int main(int argc, char **argv) 
{
    Log::init_console_file(); // Initialize logger
    if(argc != 1) 
    {
        CRITICAL("{} takes no arguments", argv[0]);
        return 1;
    }
    Config config;
    
    INFO("This is project {}", APP_NAME);
    return 0;
}
