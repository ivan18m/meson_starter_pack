#pragma once
#include "core.hpp"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"

class Log
{
public:
    static void init_console_file();
    static void init_console();
    static std::shared_ptr<spdlog::logger> logger() { return s_logger; }
private:
    static std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> console_sink;
    static std::shared_ptr<spdlog::sinks::basic_file_sink_mt> file_sink;
    static std::shared_ptr<spdlog::logger> s_logger;
};

// Macros
// #define TRACE(...)     Log::logger()->trace(__VA_ARGS__)
#define INFO(...)      Log::logger()->info(__VA_ARGS__)
#define WARN(...)      Log::logger()->warn(__VA_ARGS__)
#define ERROR(...)     Log::logger()->error(__VA_ARGS__)
#define CRITICAL(...)  Log::logger()->critical(__VA_ARGS__)