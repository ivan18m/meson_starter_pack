/**
 * @file config.cpp
 * @author Ivan Mercep
 * @brief 
 * Config class with json configuration and macros so it's easy to switch library
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
    bool allow_exceptions = true;
    bool skip_comments = true;
    try
    {
        j = json::parse(i, nullptr, allow_exceptions, skip_comments);
        LOGINFO("Config loaded: {}", path);
    }
    catch (json::exception &e)
    {
        LOGCRITICAL("CONFIG JSON PARSE: {}", e.what());
    }
} 

void Config::init(const std::string& path)
{
    std::ifstream i(path);
    bool allow_exceptions = true;
    bool skip_comments = true;
    try
    {
        j = json::parse(i, nullptr, allow_exceptions, skip_comments);
        LOGINFO("Config loaded: {}", path);
    }
    catch (json::exception &e)
    {
        LOGCRITICAL("CONFIG JSON PARSE: {}", e.what());
    }
} 

