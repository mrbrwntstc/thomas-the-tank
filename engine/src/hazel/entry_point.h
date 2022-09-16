#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern hazel::Application* hazel::create_application();

int main(int argc, char** argv)
{
  hazel::Log::init();
  HZ_CORE_WARN("Initialized Log!");
  int a = 5;
  HZ_INFO("Hello! Var = {0}", a);

  auto app = hazel::create_application();
  app->run();
  delete app;
}

#endif // HZ_PLATFORM_WINDOWS
