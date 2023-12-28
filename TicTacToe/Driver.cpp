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

