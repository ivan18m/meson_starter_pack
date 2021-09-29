/**
 * @file config.hpp
 * @author Ivan Mercep
 * @brief 
 * Config class with json configuration and macros so it's easy to switch library
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#pragma once
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class Config
{
public:
    static void init();
    static void init(const std::string& path);
    static inline auto get_value(const std::string& key) {
        return j[key];
    }
    static std::string config();
    static void print();

private:
    static json j;
};

#define CONF(...)         ::Config::get_value(__VA_ARGS__)