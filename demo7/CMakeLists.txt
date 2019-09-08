cmake_minimum_required (VERSION 2.8)

# 创建工程，工程名为demos
project (demos)

# 设置目标库及可执行文件输出目录
if (WIN32)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/win32/lib/${CMAKE_BUILD_TYPE})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/win32/lib/${CMAKE_BUILD_TYPE})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/win32/bin/${CMAKE_BUILD_TYPE})
else()
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/x86_64/lib)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/x86_64/lib)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/x86_64/bin)
endif()

# 添加头文件包含目录，将对下面添加的目录及子目录生效
include_directories(
    ${PROJECT_SOURCE_DIR}/demo2
    ${PROJECT_SOURCE_DIR}/demo3
    ${PROJECT_SOURCE_DIR}/demo4
)

# 添加库链接目录，将对下面添加的目录及子目录生效
link_directories(
    ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}
    ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
)

# 添加子目录
add_subdirectory(demo1)
add_subdirectory(demo2)
add_subdirectory(demo3)
add_subdirectory(demo4)
add_subdirectory(demo5)
add_subdirectory(demo6)

# 添加测试目标，可以使用make testall执行相应的可执行程序
add_custom_target(testall
    COMMAND demo1 || exit 0
    COMMAND demo5 || exit 0
    COMMAND demo6 || exit 0
    WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)
