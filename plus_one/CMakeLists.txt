cmake_minimum_required(VERSION 3.5)

project(plus_one LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(plus_one main.cpp)

include(GNUInstallDirs)
install(TARGETS plus_one
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
