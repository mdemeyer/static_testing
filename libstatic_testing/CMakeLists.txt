cmake_minimum_required(VERSION 3.9.2)
project(libstatic_testing VERSION 0.0.1 LANGUAGES CXX)

enable_testing()

add_library(static_testing INTERFACE)

target_include_directories(static_testing
    INTERFACE
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(static_testing INTERFACE cxx_std_17)
target_compile_options(static_testing INTERFACE -Werror -Wall -Wextra)


add_subdirectory(test)
