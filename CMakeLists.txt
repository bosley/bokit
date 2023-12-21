project (bokit)

add_library(${PROJECT_NAME} src/random/string.cpp)

add_library(bokit ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
