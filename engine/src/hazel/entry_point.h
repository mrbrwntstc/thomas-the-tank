#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern hazel::Application* hazel::create_application();

int main(int argc, char** argv)
{
  auto app = hazel::create_application();
  app->run();
  delete app;
}

#endif // HZ_PLATFORM_WINDOWS
