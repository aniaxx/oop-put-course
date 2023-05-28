//
// Created by pc on 28.05.2023.
//

#ifndef KLASA_MY_ROUND_H
#define KLASA_MY_ROUND_H

#endif //KLASA_MY_ROUND_H
#include "Bot.h"
#include "My_Bot.h"
#include "Round.h"

#pragma once

class My_round : public Round {
    char board[3][3];//tablica gry 3x3 o-gracz x-bot n-puste
    Bot *bot;

    std::string ChangePlayer(std::string a) override {//zmienia zmienna
        return a == "bot" ? "player" : "bot";
    }

public:
    My_round();

    std::string EndCheck() override;

    void PrintBoard() override;

    std::string Game() override;

    void Turn(std::string whose_turn_) override;

};