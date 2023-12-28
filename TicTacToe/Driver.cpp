// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Driver.cpp
//Driver file for program

#include <iostream>
#include "GameState.h"
#include "MoveStack.h"

using namespace std;

int main()
{
    GameState gameState;
    MoveStack moveStack;

    std::cout << "\tTic Tac Toe\n" << std::endl;
    std::cout << "The board is split into 9 tiles chosen by row and column\n";
    std::cout << "Example the top left tile is chosen by inputing the word 'Move' followed by 0 0\n";
    std::cout << "This will place your marker, 'X' or 'O', in the selected Tile (in this example the top right\n";
    std::cout << "The placements for the top row is (0 0), (0 1), (0 2)\n";
    std::cout << "The middle row is (1 0), (1 1), (1 2)\n";
    std::cout << "And the bottom (2 0), (2 1), (2 2)\n";

    bool tie = false;

    while(gameState.checkLastPlayerWin() != true)
    {
        
     
            
            gameState.displayBoardState(cout);

            string Command;
            Move temp;

            std::cout << "Player: " << gameState.getCurrentPlayer() << " take your turn" << std::endl;
            std::cin >> Command;
            if (Command == "move" || Command == "Move")
            {
                cin >> temp.x >> temp.y;
                if (gameState.addMove(temp) == 0)
                {
                    tie = true;
                    break;
                }
                else
                {
                    gameState.addMove(temp);
                }
                
                
            }
            else if (Command == "Undo" || Command == "undo")
            {
                gameState.undoLast();
            }

               
    }


    if (!tie)
    {
        if (gameState.getCurrentPlayer() == 0)
        {
            gameState.displayBoardState(cout);
            std::cout << "The O's Win it!" << std::endl;
        }
        else
        {
            gameState.displayBoardState(cout);
            std::cout << "The X's Win it!" << std::endl;
        }

    }
    else
    {
        std::cout << "TIE!!!" << std::endl;
    }

    moveStack.~MoveStack();
}

