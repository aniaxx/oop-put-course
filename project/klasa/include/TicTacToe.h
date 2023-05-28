//
// Created by pc on 28.05.2023.
//

#ifndef KLASA_TICTACTOE_H
#define KLASA_TICTACTOE_H

#endif //KLASA_TICTACTOE_H
#include "TicTacToe_interface.h"
#include "My_round.h"
#include <iostream>
#include <vector>
#pragma once

class TicTacToe :public TicTacToe_interface {
    int players_score_;
    int bots_score_;
    public:
    TicTacToe();
    void PrintScore()override;
    void NewGame()override;
};