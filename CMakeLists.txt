cmake_minimum_required(VERSION 3.8)
project(ProgettoP2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Lista.h Lista.cpp ListaS.h ListaS.cpp ListaD.h ListaD.cpp ListaChar.h ListaChar.cpp ListaString.h ListaString.cpp)
add_executable(ProgettoP2 ${SOURCE_FILES})