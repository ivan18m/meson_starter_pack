#pragma once
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class Config
{
public:
    static void init();
    static void init(std::string path);
    static inline auto get_value(const std::string& key) {
        return j[key];
    }

private:
    static json j;
};

#define CONF(...)         ::Config::get_value(__VA_ARGS__)