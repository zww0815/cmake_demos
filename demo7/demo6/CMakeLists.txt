set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")
link_libraries(demo3 demo4)
add_executable(demo6 main.c)
