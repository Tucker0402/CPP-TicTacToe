#pragma once
#include "TicTacToe.h"

TicTacToe::TicTacToe() { player = 1;  count = 0; m_board[0] = ' ', m_board[1] = ' ', m_board[2] = ' ', m_board[3] = ' ', m_board[4] = ' ', m_board[5] = ' ', m_board[6] = ' ', m_board[7] = ' ', m_board[8] = ' '; }

	bool TicTacToe::IsGameOver() const
	{
		// Logic to determine if game is over (check for win or all slots full, return true or false)
		if (m_board[0] == m_board[3] && m_board[3] == m_board[6] && m_board[6] == 'X'
			|| m_board[1] == m_board[4] && m_board[4] == m_board[7] && m_board[7] == 'X'
			|| m_board[2] == m_board[5] && m_board[5] == m_board[8] && m_board[8] == 'X'
			|| m_board[0] == m_board[1] && m_board[1] == m_board[2] && m_board[2] == 'X'
			|| m_board[3] == m_board[4] && m_board[4] == m_board[5] && m_board[5] == 'X'
			|| m_board[6] == m_board[7] && m_board[7] == m_board[8] && m_board[8] == 'X'
			|| m_board[0] == m_board[4] && m_board[4] == m_board[8] && m_board[8] == 'X'
			|| m_board[2] == m_board[4] && m_board[4] == m_board[6] && m_board[6] == 'X')
		{
			std::cout << "Player 1 Wins!\n";
			return true;
		}
		else if (m_board[0] == m_board[3] && m_board[3] == m_board[6] && m_board[6] == 'O'
			|| m_board[1] == m_board[4] && m_board[4] == m_board[7] && m_board[7] == 'O'
			|| m_board[2] == m_board[5] && m_board[5] == m_board[8] && m_board[8] == 'O'
			|| m_board[0] == m_board[1] && m_board[1] == m_board[2] && m_board[2] == 'O'
			|| m_board[3] == m_board[4] && m_board[4] == m_board[5] && m_board[5] == 'O'
			|| m_board[6] == m_board[7] && m_board[7] == m_board[8] && m_board[8] == 'O'
			|| m_board[0] == m_board[4] && m_board[4] == m_board[8] && m_board[8] == 'O'
			|| m_board[2] == m_board[4] && m_board[4] == m_board[6] && m_board[6] == 'O')
		{
			std::cout << "Player 2 Wins!\n";
			return true;
		}
		else if (count == 9)
		{
			std::cout << "Its A Tie!\n";
			return true;
		}
		else
		{
			return false;
		}
	}

	void TicTacToe::TakeTurn()
	{
		int choice = 0;

		//Logic for turns (if player 1 = cin input for x, if player 2 cin for o)
		if (player == 1)
		{
			std::cout << "Please make a move (select a not filled space, 1-9)";
			std::cin >> choice;
			choice = choice--;

			if (m_board[choice] == ' ')
			{
				m_board[choice] = 'X';
				count++;
				player = 2;
			}
		}

		else if (player == 2)
		{
			std::cout << "Please make a move (select a not filled space, 1-9)";
			std::cin >> choice;
			choice = choice--;

			if (m_board[choice] == ' ')
			{
				m_board[choice] = 'O';
				count++;
				player = 1;
			}
		}
	}