# 使用 GLOB 获取源文件列表
file(GLOB SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.c
    ${CMAKE_SOURCE_DIR}/lib/*.c
    ${CMAKE_SOURCE_DIR}/STM32F10x_StdPeriph_Driver/src/*.c
)
add_library(stlib STATIC ${SOURCES})
target_include_directories(stlib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/includes")