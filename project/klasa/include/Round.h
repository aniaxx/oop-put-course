//
// Created by pc on 28.05.2023.
//

#ifndef KLASA_ROUND_H
#define KLASA_ROUND_H

#endif //KLASA_ROUND_H
#include <iostream>
#pragma once
class Round{
    public:
    virtual void Turn(std::string whose_turn_) = 0;
    virtual std::string Game() = 0;
    virtual std::string ChangePlayer(std::string a) = 0;
    virtual std::string EndCheck() = 0;
    virtual void PrintBoard() = 0;;
};