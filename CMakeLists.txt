cmake_minimum_required(VERSION 3.21)
project(NanoTestJUCE)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)

FetchContent_Declare(
    JUCE
    URL https://github.com/juce-framework/JUCE/archive/refs/tags/8.0.12.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_Declare(
    NanoTest
    GIT_REPOSITORY https://github.com/eyalamirmusic/NanoTest.git
    GIT_TAG main
)

FetchContent_MakeAvailable(JUCE NanoTest)

enable_testing()
add_subdirectory(Tests)