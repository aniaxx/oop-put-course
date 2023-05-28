//
// Created by pc on 28.05.2023.
//
#include "../include/My_round.h"
#pragma once

My_round :: My_round() {//ustawia tablice na n i tworzy bota
    this->bot = new My_bot;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = 'n';
}
std::string My_round :: EndCheck() {
char winner = 'g';
// any of the rows is same
for (int i = 0; i <= 2; i++)//jesli ktorys rzad jest wygrany, ustawia winner na znaczek
{
if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 'n')
{
winner = board[i][0];

}
}
// any of the columns is same
for (int i = 0; i <= 2; i++)//jesli ktoras kolumna jest wygrana ustawia znaczzek
{
if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 'n')
{
winner = board[0][i];

}
}

// 1st diagonal is same
if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 'n')//to samo dla obu przekatnych
{
winner = board[0][0];

}

// 2nd diagonal is same
if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 'n')
{
winner = board[0][2];

}
if (winner == 'o')
return "player";
if (winner == 'x')
return "bot";
// if we reached here nobody has won yet

// if any empty box on board then play on
for (int i = 0; i <= 2; i++)//jesli nikt nie wygral i sa jeszcze wolne miejsca zwraca No zeby grac dalej
{
for (int j = 0; j <= 2; j++)
{
if (board[i][j] == 'n')
{
winner = 'n';

}
}
}

if (winner == 'n')
return "No";
return "Draw";//jesli nic wczesniej sie nie wykonalo oznacza ze jest remis

}
void My_round :: PrintBoard(){//wyswietla tablice
int j = 0;
int i = 0;
for (i = 0; i < 2; i++)
{

for (j = 0; j < 2; j++)
{
if (board[i][j] == 'n')
std::cout << ' ';
else
std::cout << board[i][j];
std::cout << '|';
}
if (board[i][j] == 'n')
std::cout << ' ';
else
std::cout << board[i][j];
std::cout << "\n------\n";
}
for (j = 0; j < 2; j++)
{
if (board[i][j] == 'n')
std::cout << ' ';
else
std::cout << board[i][j];
std::cout << '|';
}
if (board[i][j] == 'n')
std::cout << ' ';
else
std::cout << board[i][j] << '\n';
}
std::string My_round ::Game(){//ready
std::string whose_turn_;
whose_turn_ = rand() % 2 == 1 ? "bot" : "player";//losuje pierwszego gracza

while (1) {
whose_turn_ = ChangePlayer(whose_turn_);//zmiana aktualnego gracza
if (EndCheck() == "No")//jesli tablica nie jest pelna-wykonaj ruch
{
Turn(whose_turn_);
continue;
}
else if (EndCheck() == "player")//jesli wygral gracz, wyswietl i zwroc "player" zeby w klasie tictactoe zwiekszyc wynik
{
std::cout << "You won!\n";
PrintBoard();
return "player";
}
else if (EndCheck() == "bot")//jesli wygral bot, wyswietl i zwroc "player" zeby w klasie tictactoe zwiekszyc wynik
{
std::cout << "You lost:(\n";
PrintBoard();
return "bot";
}
else if (EndCheck() == "Draw")//jesli tablica jest pelna, wyswiet
{
std::cout << "it's a draw\n";
}

}
}
void My_round :: Turn(std::string whose_turn_){//pojedynczy ruch

if (whose_turn_ == "bot")//jesli jest ruch bota, wywolaj bot.move() i wstaw x w wybrane miejsce
{
std::vector<int>coordinates = bot->Move(board);
board[coordinates[0]][coordinates[1]] = 'x';
return;
}

int row, column;

while (1) {//jesli ruch gracza
PrintBoard();//wyswietl tablice
std::cout << "enter coordinates of your next move ('row column')\n";
std::cin >> row >> column;
row--;
column--;//pobierz koordynaty i zmniejsz o jeden zeby pasoway do indeksowania tablicy
if (row > 3 || row < 0 || column>3 || column < 0)//sprawdz czy wybrano mieszace sie koordynaty
std::cout << "both coordinates must equal 1,2 or 3, try again\n";
else if (board[row][column] != 'n')//sprawdz czy miejsce nie jest zajete
{
std::cout << "this square is occupied, try again\n";

}
else//jesli wszystko sie zgadza, zajmij pole
{
board[row][column] = 'o';
return;
}
}
}