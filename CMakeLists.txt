cmake_minimum_required(VERSION 3.1)
project(ncurses_learning)

add_executable(goodbye goodbye.cc)
add_executable(add1 add1.cc)
add_executable(add2 add2.cc)

target_link_libraries(goodbye ncurses)
target_link_libraries(add1 ncurses)
target_link_libraries(add2 ncurses)


