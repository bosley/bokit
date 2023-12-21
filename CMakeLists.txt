cmake_minimum_required (VERSION 3.8)

project(bokit)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(${CMAKE_SOURCE_DIR}/cmake/SetEnv.cmake)

include_directories($CMAKE_SOURCE_DIR/lib)

set(HEADERS
    ${CMAKE_SOURCE_DIR}/bokit/random/generator.hpp
    ${CMAKE_SOURCE_DIR}/bokit/random/entry.hpp
    ${CMAKE_SOURCE_DIR}/bokit/random/string.hpp
    ${CMAKE_SOURCE_DIR}/bokit/types/lifetime.hpp
    ${CMAKE_SOURCE_DIR}/bokit/types/view.hpp
    ${CMAKE_SOURCE_DIR}/bokit/types/shared_obj.hpp
)

set(SOURCES
    ${CMAKE_SOURCE_DIR}/bokit/random/string.cpp
)

include(${CMAKE_SOURCE_DIR}/cmake/LibraryConfig.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/InstallConfig.cmake)
