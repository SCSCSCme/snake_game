cmake_minimum_required(VERSION 3.12)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

file(GLOB SOURCE_FILES "src/*.cpp")

add_executable(SnakeGame ${SOURCE_FILES})
target_include_directories(SnakeGame PRIVATE "./thirdparty/TC.hpp/include")

execute_process(
    COMMAND ${CMAKE_COMMAND} -E create_symlink
            ${CMAKE_BINARY_DIR}/compile_commands.json
            ${CMAKE_SOURCE_DIR}/compile_commands.json
)