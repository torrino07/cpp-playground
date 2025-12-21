
cmake_minimum_required(VERSION 3.22)
project(cpp_playground VERSION 0.1.0 LANGUAGES CXX)

# Require modern C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Strong warnings
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
  add_compile_options(-Wall -Wextra -Wpedantic -Wconversion)
endif()

# Enable sanitizers in Debug builds
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  add_link_options(-fsanitize=address,undefined)
  add_compile_options(-fsanitize=address,undefined -fno-omit-frame-pointer)
endif()

add_library(playground_lib
  src/math.cpp
)
target_include_directories(playground_lib PUBLIC include)

add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE playground_lib)

# ---- GoogleTest (header-only fetch) ----
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# Prevent gtest from installing files
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(unit_tests tests/math_tests.cpp)
target_link_libraries(unit_tests PRIVATE playground_lib GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(unit_tests)
