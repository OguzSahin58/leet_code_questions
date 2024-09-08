cmake_minimum_required(VERSION 3.5)

project(merge_sorted_array LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(merge_sorted_array main.cpp)

include(GNUInstallDirs)
install(TARGETS merge_sorted_array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
