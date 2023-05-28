//
// Created by pc on 28.05.2023.
//
#include "../include/TicTacToe.h"
#pragma once

TicTacToe :: TicTacToe() {
    players_score_ = 0;
    bots_score_ = 0;
}
void TicTacToe :: PrintScore(){//wyswietla wynik
std::cout << "your points: " << players_score_ << " opponents points: " << bots_score_ << '\n';
}
void TicTacToe :: NewGame(){//rozpoczyna nowa gre
std::string difficulty_;

Round* new_round = new My_round;
std::string winner = new_round->Game();//tworzy my_round i wywoluje game oraz zmienia wynik
if (winner == "bot")
bots_score_++;
else if (winner == "player")
players_score_++;
delete new_round;//usuwa obiekt zeby niepotrzebnie nie zjamowal miejsca

}