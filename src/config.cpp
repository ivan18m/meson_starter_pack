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

