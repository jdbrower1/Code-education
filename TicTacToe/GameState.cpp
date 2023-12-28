//Implementation of the GameState member functions

#include "GameState.h"
#include "MoveStack.h"

bool GameState::checkLastPlayerWin() {
    char targetSymbol = getCurrentPlayer() ? 'X' : 'O';
    int sumHorizontal, sumVertical;
    for (int i = 0; i < 3; ++i) {
        sumHorizontal = 0;
        sumVertical = 0;
        for (int j = 0; j < 3; ++j) {
            sumHorizontal += boardState[i][j] == targetSymbol;
            sumVertical += boardState[j][i] == targetSymbol;
        }
        if (sumHorizontal == 3 || sumVertical == 3)
            return true;
    }
    int sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (int i = 0; i < 3; ++i) {
        sumDiagonal1 += boardState[i][i] == targetSymbol;
        sumDiagonal2 += boardState[i][2 - i] == targetSymbol;
    }
    if (sumDiagonal1 == 3 || sumDiagonal2 == 3)
        return true;

    return false;
}


GameState::GameState()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			boardState[i][j] = '_';
		}
	}
}

int GameState::getCurrentPlayer()
{
	
	int num = moveStack.getSize();
	
	if (num % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int GameState::addMove(Move move)
{
	if (moveStack.getSize() > 8)
	{
		return 0;
	}
	else
	{
		if (GameState::getCurrentPlayer() == 0)
		{
			if (this->boardState[move.x][move.y] != '_')
			{
				return -1;
			}
			else
			{
				GameState::boardState[move.x][move.y] = 'X';
				moveStack.push(move);
				return 1;
			}

		}
		else
		{
			if (this->boardState[move.x][move.y] != '_')
			{
				return -1;
			}
			else
			{
				GameState::boardState[move.x][move.y] = 'O';
				moveStack.push(move);
				return 1;
			}

		}
		
	}




	
	return 0; 
}

void GameState::displayBoardState(std::ostream& out)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			out << boardState[i][j];
		}
		out << std::endl;
	}
}

bool GameState::undoLast()
{
	if (moveStack.getSize() >= 1)
	{
		Move Temp = moveStack.top();
		this->boardState[Temp.x][Temp.y] = '_';
		moveStack.pop();
		return true;
	}
	else
	{
		return false;
	}

}