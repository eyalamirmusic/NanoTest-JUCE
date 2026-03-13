cmake_minimum_required(VERSION 3.21)
project(NanoTestJUCE)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)

FetchContent_Declare(
    JUCE
    URL https://github.com/juce-framework/JUCE/archive/refs/tags/8.0.12.zip
)

FetchContent_Declare(
    NanoTest
    GIT_REPOSITORY https://github.com/eyalamirmusic/NanoTest.git
    GIT_TAG main
)

FetchContent_MakeAvailable(JUCE NanoTest)

juce_add_console_app(Tests PRODUCT_NAME "Tests" VERSION 0.1.0)
nano_setup_target(Tests SOURCES Tests.cpp TARGETS juce_core)
enable_testing()