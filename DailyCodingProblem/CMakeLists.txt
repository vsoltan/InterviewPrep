cmake_minimum_required(VERSION 3.26)

project(
    DailyCodingProblem
    VERSION "1.0"
    DESCRIPTION "Solutions and tests for daily problem mailing list"
    HOMEPAGE_URL "https://www.dailycodingproblem.com"
    LANGUAGES "CXX"
)

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip 
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(example example.cpp)
target_link_libraries(example gtest_main)
# add_test(NAME example_test COMMAND example)
