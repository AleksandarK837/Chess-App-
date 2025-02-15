#pragma once
#include "ChessBoard.h"

class ChessGame
{
public:
	ChessGame();

private:
	Color playerTurn;
	ChessBoard chessBoard;

public:
	void startGame();
	void moveFigure(int fromRow, char fromColumn, int toRow, char toColumn);
	bool gameOver();

private:
	void moveFigure(ChessBox start, ChessBox end);
};