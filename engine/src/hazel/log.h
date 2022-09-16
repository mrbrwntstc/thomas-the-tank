#pragma once

#include <memory>

#include "core.h"
#include  "spdlog/spdlog.h"

namespace hazel
{
  class HAZEL_API Log
  {
  public:
    static void init();

    inline static std::shared_ptr<spdlog::logger>& core_logger() { return s_core_logger; }
    inline static std::shared_ptr<spdlog::logger>& client_logger() { return s_client_logger; }


  private:
    static std::shared_ptr<spdlog::logger> s_core_logger;
    static std::shared_ptr<spdlog::logger> s_client_logger;
  };
}

// core log macros
#define HZ_CORE_TRACE(...)  ::hazel::Log::core_logger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)   ::hazel::Log::core_logger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)   ::hazel::Log::core_logger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)  ::hazel::Log::core_logger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)  ::hazel::Log::core_logger()->critical(__VA_ARGS__)

// client log macros
#define HZ_TRACE(...)       ::hazel::Log::client_logger()->trace(__VA_ARGS__)
#define HZ_INFO(...)        ::hazel::Log::client_logger()->info(__VA_ARGS__)
#define HZ_WARN(...)        ::hazel::Log::client_logger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)       ::hazel::Log::client_logger()->error(__VA_ARGS__)
#define HZ_FATAL(...)       ::hazel::Log::client_logger()->critical(__VA_ARGS__)
