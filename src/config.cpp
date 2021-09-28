#include "core.hpp"
#include "config.hpp"
#include "log.hpp"
#include "nlohmann/json.hpp"

using json = nlohmann::json;

Config::Config() 
{
    std::ifstream i("config/config.json");
    i >> this->j;
    INFO("Config created");
} 

Config::~Config()
{
    INFO("Config destroyed");
}
