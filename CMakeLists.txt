cmake_minimum_required(VERSION 2.8.4)
project(AnnuaireTelephonique)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Annuaire.cpp Abonne.cpp)
add_executable(AnnuaireTelephonique ${SOURCE_FILES})