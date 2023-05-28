//
// Created by pc on 28.05.2023.
//

#ifndef KLASA_MY_BOT_H
#define KLASA_MY_BOT_H

#endif //KLASA_MY_BOT_H
#include <iostream>
#include <vector>
#include "Bot.h"
#pragma once
class My_bot :public Bot
{
    public:
    std::vector<int> Move(char tab[3][3]) override;
};
