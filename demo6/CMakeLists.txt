cmake_minimum_required (VERSION 2.8)
project (demos)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo3
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo4
)

link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo3/build
    ${CMAKE_CURRENT_SOURCE_DIR}/../demo4/build
)

link_libraries(demo3 demo4)

add_executable(demo6 main.c)
