include(src/Controller/CMakeLists.txt)
include(src/Model/CMakeLists.txt)

list(APPEND gameofclicks_SOURCES
    "${CMAKE_CURRENT_LIST_DIR}/Main.cpp"
)
