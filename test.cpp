#include "tictactoe.h"

int main()
{
    TicTacToe game;

    game.init(1);

    for (int i = 0; i < 10; ++i)
    {
        cout << "---- " << i << " -----" << endl;
        game.gameLoop();
    }
}