
add_library(addUpTo src/impl.cpp)
target_include_directories(addUpTo PUBLIC src)

add_executable(addUpToTest test/test.cpp)
target_link_libraries(addUpToTest addUpTo gtest_main)
