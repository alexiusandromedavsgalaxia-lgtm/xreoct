cmake_minimum_required(VERSION 3.20)
project(xreoct_game_cpp LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(xreoct_game
  src/main.cpp
  src/engine.cpp
  src/scene.cpp
  src/map.cpp
  src/character.cpp
  src/config.cpp
)
target_include_directories(xreoct_game PRIVATE include)
