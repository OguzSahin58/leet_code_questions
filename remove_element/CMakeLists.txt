cmake_minimum_required(VERSION 3.5)

project(remove_element LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(remove_element main.cpp)

include(GNUInstallDirs)
install(TARGETS remove_element
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
