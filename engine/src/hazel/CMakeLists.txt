# engine/src/hazel CMakeListst.txt

project("hazel")

set(hazel_LIB ${PROJECT_NAME} PARENT_SCOPE)

# object libraries compile source, but do not archive or link their object files to a library
# instead, they get referenced by other targets created by add_library() or add_executable()
add_library(${PROJECT_NAME} OBJECT
  "application.cpp"
  "application.h"
  "core.h"
  "entry_point.h"
)

target_include_directories(${PROJECT_NAME}
PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_compile_definitions(${PROJECT_NAME}
PRIVATE
  $<$<PLATFORM_ID:Windows>:HZ_PLATFORM_WINDOWS>
  HZ_BUILD_DLL
)
