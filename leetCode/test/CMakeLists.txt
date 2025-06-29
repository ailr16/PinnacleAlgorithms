cmake_minimum_required(VERSION 3.14)
project(LeetCodeUnitTesting)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download and install GoogleTest
include(FetchContent)
FetchContent_Declare(googleTest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        main
)
FetchContent_MakeAvailable(googleTest)

add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

enable_testing()

# Tests definition
add_executable(unitTests
    TEST__divide.cpp
    TEST__addTwoNumbers.cpp
)

target_link_libraries(unitTests
    PRIVATE
        GTest::GTest
        gmock
        lib_divide
        lib_addTwoNumbers
)

target_include_directories(unitTests PRIVATE ../inc)

add_test(NAME    test
         COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/unitTests
)