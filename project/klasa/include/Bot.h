//
// Created by pc on 28.05.2023.
//

#ifndef KLASA_BOT_H
#define KLASA_BOT_H

#endif //KLASA_BOT_H
#include <iostream>
#include <vector>
#pragma once

class Bot {
    public:
    virtual std::vector<int> Move(char tab[3][3]) = 0;
};