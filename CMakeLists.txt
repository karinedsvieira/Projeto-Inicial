cmake_minimum_required(VERSION 3.8)
project(ProjetoInicial)

set(CMAKE_CXX_STANDARD 11)
add_executable(MainTeste mainTeste.cpp)
set(SOURCE_FILES main.cpp Carro.h)
add_executable(ProjetoInicial ${SOURCE_FILES})