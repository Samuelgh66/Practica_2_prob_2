cmake_minimum_required(VERSION 3.5)

project(Practica_2_prob_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practica_2_prob_2 main.cpp
    combinacion.h
    combinacion.cpp)

include(GNUInstallDirs)
install(TARGETS Practica_2_prob_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
