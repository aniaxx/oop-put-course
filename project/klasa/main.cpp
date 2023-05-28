// TicTacToe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<vector>
#include "include/Bot.h"
#include "include/My_Bot.h"
#include "include/TicTacToe.h"
#include "include/My_round.h"
#include "include/Round.h"
#include "include/TicTacToe_interface.h"

int main()
{
    std::cout << "rows and columns are numberd from 1 to 3\n";
    std::string choicestr;
    char choice = 0;
    TicTacToe_interface* game = new TicTacToe;
    while (choice != '3')
    {
        std::cout << "Want do you want to do? enter:\n'1' to star new round,\n2 to see the score,\n3 to close game\n";
        std::cin >> choicestr;
        choice = choicestr[0];
        switch (choice) {
            case '1':
                game->NewGame();
                break;
            case '2':
                game->PrintScore();
            case '3':
                std::cout << "program is closing\n";
                break;
            default:
                std::cout << "wrong input, try again\n";
        }

    }
}