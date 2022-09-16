# engine/src CMakeLists.txt

project("engine")

add_subdirectory("hazel")

add_library(hazel_engine SHARED "hazel_engine.h")

target_link_libraries(hazel_engine
PUBLIC 
  ${hazel_LIB}
)

target_include_directories(hazel_engine
INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

set_target_properties(hazel_engine
PROPERTIES
  LINKER_LANGUAGE CXX
)
