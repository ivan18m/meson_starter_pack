/**
 * @file log.hpp
 * @author Ivan Mercep
 * @brief 
 * Logging class setup with macros so it's easy to switch library
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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
    static inline std::shared_ptr<spdlog::logger>& logger() { return s_logger; }
private:
    static std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> console_sink;
    static std::shared_ptr<spdlog::sinks::basic_file_sink_mt> file_sink;
    static std::shared_ptr<spdlog::logger> s_logger;
};

// Macros
#define LOGTRACE(...)     ::Log::logger()->trace(__VA_ARGS__)
#define LOGINFO(...)      ::Log::logger()->info(__VA_ARGS__)
#define LOGWARN(...)      ::Log::logger()->warn(__VA_ARGS__)
#define LOGERROR(...)     ::Log::logger()->error(__VA_ARGS__)
#define LOGCRITICAL(...)  ::Log::logger()->critical(__VA_ARGS__)