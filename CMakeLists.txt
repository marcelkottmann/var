cmake_minimum_required(VERSION 3.14)
project(var)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

## just download JSONTestSuite
include(ExternalProject)

include_directories("src")

if(DEFINED ENV{GTEST})
    include(FetchContent)
    FetchContent_Declare(
      googletest
      URL https://github.com/google/googletest/archive/075810f7a20405ea09a93f68847d6e963212fa62.zip
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    ExternalProject_Add(
      JSONTestSuite
      PREFIX JSONTestSuite
      URL https://github.com/nst/JSONTestSuite/archive/d64aefb55228d9584d3e5b2433f720ea8fd00c82.zip
      CONFIGURE_COMMAND ""
      BUILD_COMMAND ""
      INSTALL_COMMAND ""
    )

    enable_testing()
    add_executable(
      unit-tests
      src/var.cpp tests/test-var.cpp tests/test-operators.cpp
    )
    target_link_libraries(
      unit-tests
      gtest_main
    )

    # discover unit tests automatically
    include(GoogleTest)
    gtest_discover_tests(unit-tests)
endif()

add_executable(
  generate
  tools/generate.cpp src/var.cpp
)

add_executable(
  cpp-example
  examples/cpp-example/cpp-example.cpp src/var.cpp
)

add_library(var-c-connector SHARED src/var-c.cpp src/var.cpp)

add_executable(
  c-example
  examples/c-example/c-example.c
)
target_link_libraries(
  c-example
  var-c-connector
)
