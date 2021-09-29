#include "core.hpp"
#include "log.hpp"
#include "spdlog/sinks/stdout_color_sinks.h"

std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> Log::console_sink;
std::shared_ptr<spdlog::sinks::basic_file_sink_mt> Log::file_sink;
std::shared_ptr<spdlog::logger> Log::s_logger;

void Log::init_console_file()
{
    spdlog::set_pattern("%^[%T] %n: %v%$");

    console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    console_sink->set_level(spdlog::level::trace);
    console_sink->set_pattern("%^[%T] %n: %v%$");
    // console_sink->set_pattern("[multi_sink_example] [%^%l%$] %v");

    file_sink = std::make_shared<spdlog::sinks::basic_file_sink_mt> ("logs/log.txt", true);
    file_sink->set_level(spdlog::level::warn);
    file_sink->set_pattern("[%T] [%l] %v");

    spdlog::logger logger(APP_NAME, {console_sink, file_sink});
    s_logger = logger.clone(APP_NAME);
    s_logger->set_level(spdlog::level::trace);
}

void Log::init_console()
{
    spdlog::set_pattern("%^[%T] %n: %v%$");
    s_logger = spdlog::stdout_color_mt(APP_NAME);
    s_logger->set_level(spdlog::level::trace);
}