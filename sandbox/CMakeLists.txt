# sandbox CMakeLists.txt

project("sandbox")

add_executable(${PROJECT_NAME}
  "sandbox_app.cpp"
)

target_link_libraries(${PROJECT_NAME}
PRIVATE
  hazel_engine
  spdlog::spdlog
)

target_compile_definitions(${PROJECT_NAME}
PRIVATE
  $<$<PLATFORM_ID:Windows>:HZ_PLATFORM_WINDOWS>
)
