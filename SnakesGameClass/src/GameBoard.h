/*
 * GameBoard.h
 *
 *  Created on: 23 may. 2020
 *      Author: luisd
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include <vector>
using namespace std;
#pragma once


class GameBoard {
public:
	GameBoard() = default;
	GameBoard(int, int, int, vector<int>*,vector<string>*);
	virtual ~GameBoard();
	int getSize();
	void fillBoard(int num);
	void printBoard();
	void printDecode();
	void printEncode();
	void printBoth();
	void fillBoardRand(int, int);
	void printMatrix();
	string decodeNumber(int);
	void printDecodedMatrix();
	vector <int> getBoard();

protected:
	int size;
	int rowLength;
	int codeNum;
	vector <int> board ;
// Decode and Encode must be of the same size
	vector <string> encode;
	vector <int> decode;

};

#endif /* GAMEBOARD_H_ */
