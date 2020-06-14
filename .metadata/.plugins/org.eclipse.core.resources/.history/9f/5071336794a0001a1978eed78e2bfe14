/*
 * TablePlayer.h
 *
 *  Created on: 23 may. 2020
 *      Author: luisd
 */

#ifndef TABLEPLAYER_H_
#define TABLEPLAYER_H_
#include "Player.h"

class TablePlayer: public Player {
public:
	TablePlayer() = default;
	TablePlayer(string username, int id, int tableC);
	virtual ~TablePlayer();
	int getPosition();
	void changePosition(int num,bool sing);
	void print() override;
	int getTableCode();
	int getId();
	void setPosition(int n);
	void sumPos(int n);
	void restPos(int n);
private:
	int iD;
	int position;
	int tableCode;
};

#endif /* TABLEPLAYER_H_ */
