cmake_minimum_required(VERSION 3.5)

project(remove_duplicates_from_sorted_array LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(remove_duplicates_from_sorted_array main.cpp)

include(GNUInstallDirs)
install(TARGETS remove_duplicates_from_sorted_array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
