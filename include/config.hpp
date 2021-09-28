#pragma once
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class Config
{
public:
    Config();
    ~Config();
private:
    json j;
};