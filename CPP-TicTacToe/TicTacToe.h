#pragma once
#include <iostream>
#include "Game.h"

class TicTacToe : public Game
{
private:
	char m_board[9] = " ";
	int player = 0;
	int count;

public:
	TicTacToe();

	bool IsGameOver() const;

	void TakeTurn();

	void Display() const
	{
		std::cout << m_board[0] << "|" << m_board[1] << "|" << m_board[2] << "\n-----\n" << m_board[3] << "|" << m_board[4] << "|" << m_board[5] << "\n-----\n" << m_board[6] << "|" << m_board[7] << "|" << m_board[8] << "\n";
	}
	virtual ~TicTacToe() { }
};