//
// Created by pc on 28.05.2023.
//
#include "../include/My_Bot.h"
#pragma once
std::vector<int> My_bot :: Move(char tab[3][3]){
std::vector<int> coordinates;
int row_, column_;
while (1)
{
row_ = rand() % 3;//losuje koordynaty
column_ = rand() % 3;
if (tab[row_][column_] == 'n')//sprawdza czy pole nie jest zajete, jesli nie to dodaje je do wektora i zwraca
{
coordinates.push_back(row_);
coordinates.push_back(column_);
return coordinates;
}
}
}