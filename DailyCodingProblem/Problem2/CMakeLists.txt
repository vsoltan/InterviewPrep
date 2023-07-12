
add_library(productExceptSelf src/impl.cpp)
target_include_directories(productExceptSelf PUBLIC src)

add_executable(productExceptSelfTest test/test.cpp)
target_link_libraries(
    productExceptSelfTest 
    productExceptSelf
    gtest_main
)
