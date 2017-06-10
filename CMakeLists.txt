cmake_minimum_required (VERSION 2.6)
project (GameOClicks)

include_directories(include)

SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB SOURCES "src/*.cpp" "src/ResManagement/*.cpp")

add_executable(GameOfClicks ${SOURCES})
target_link_libraries(GameOfClicks sfml-window sfml-graphics sfml-system sfml-audio)
