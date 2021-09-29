/**
 * @file config.cpp
 * @author Ivan Mercep
 * @brief 
 * Config class with json configuration and macros so it's easy to switch library
 * @version 0.1
 * @date 2021-09-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "core.hpp"
#include "config.hpp"
#include "log.hpp"
#include "nlohmann/json.hpp"


json Config::j;

void Config::init()
{
    std::string path = "config/config.json";
    std::ifstream i(path);
    i >> j;
    LOGINFO("Config loaded: {}", path);
} 

void Config::init(std::string path)
{
    std::ifstream i(path);
    i >> j;
    LOGINFO("Config loaded {}", path);
} 

