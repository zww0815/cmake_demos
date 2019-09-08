file(GLOB src_files *.c *.cpp)

add_library(demo4_static STATIC ${src_files})
set_target_properties(demo4_static PROPERTIES OUTPUT_NAME "demo4")

add_library(demo4_shared SHARED ${src_files})
set_target_properties(demo4_shared PROPERTIES OUTPUT_NAME "demo4")