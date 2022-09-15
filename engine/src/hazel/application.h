#pragma once

#include "core.h"

namespace hazel
{
  class HAZEL_API Application
  {
  public:
    Application();
    virtual ~Application();

    void run();
  };

  // to be defined in client
  Application* create_application();
}
