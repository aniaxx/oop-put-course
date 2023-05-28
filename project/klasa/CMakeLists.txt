cmake_minimum_required(VERSION 3.24)
project(klasa)

set(CMAKE_CXX_STANDARD 23)

add_executable(klasa main.cpp include/Bot.h include/My_Bot.h src/My_Bot.cpp include/TicTacToe_interface.h include/TicTacToe.h include/Round.h include/My_round.h src/TicTacToe.cpp src/My_Round.cpp)
