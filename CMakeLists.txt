cmake_minimum_required (VERSION 3.8)

project (bokit)

set(CMAKE_CXX_STANDARD 20)

option(BUILD_EXAMPLES     "Build Examples" OFF)
option(WITH_ASAN     "Compile with ASAN" ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to 'Debug' as none was specified.")
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release")
endif()

if(WITH_ASAN)
  set(CMAKE_CX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
  set(CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
endif()

set(BOKIT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/bokit/include)

add_library(${PROJECT_NAME} bokit/src/random/string.cpp)

add_library(bokit::lib ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
  PUBLIC ${BOKIT_INCLUDE_DIR}
)

if(BUILD_EXAMPLES)
  add_subdirectory("examples")
endif()
