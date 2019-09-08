cmake_minimum_required (VERSION 2.8)
project (demos)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo2
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo4
)

link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo2/build
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo4/build
)

link_libraries(demo2 demo4)

add_executable(demo5 main.c)
