cmake_minimum_required(VERSION 4.2)

project(NativeTrojanHorseRace VERSION 1.0)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF) 



add_subdirectory(Engine)
add_subdirectory(TrojanHorseRace)