cmake_minimum_required (VERSION 2.6)
project (GameOfClicks)

include_directories(Controller Model View Model/States Model/UI)

SET( SRC_TO_OJB  TRUE)
SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pedantic")

file(GLOB SOURCES "Controller/*.cpp" "View/*.cpp" "Model/States/*.cpp" "Model/UI/*.cpp")

add_executable(GameOfClicks ${SOURCES})
target_link_libraries(GameOfClicks sfml-window sfml-graphics sfml-system sfml-audio)
