project(MyHello CXX)
cmake_minimum_required(VERSION 2.8)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB_RECURSE LOGGER_SOURCES "*.cpp")
file(GLOB_RECURSE LOGGER_HEADERS "*.h")

set (LOGGER_INCLUDE_DIRS "")
foreach (_headerFile ${LOGGER_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND LOGGER_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES LOGGER_INCLUDE_DIRS)

add_library(logger ${LOGGER_SOURCES})
target_include_directories(logger PRIVATE ${LOGGER_INCLUDE_DIRS})