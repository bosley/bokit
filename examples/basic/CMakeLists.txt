
project (basic_example)

add_executable(basic_example
  main.cpp)

target_link_libraries(basic_example
  PRIVATE
    bokit::lib)

