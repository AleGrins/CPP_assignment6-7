#pragma once

#include "Player.h"
#include "Board.h"

class TicTacToe {
private:
    Player* winner;
    Board gameBoard;
    

public:
    TicTacToe(int i);
	void play(const Player Px, const Player Po);
	Board board() const;
	Player winner() const;
	bool checkVictory(const myChar c);
};