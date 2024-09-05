cmake_minimum_required(VERSION 3.5)

project(two_sum LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(two_sum main.cpp)

include(GNUInstallDirs)
install(TARGETS two_sum
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
