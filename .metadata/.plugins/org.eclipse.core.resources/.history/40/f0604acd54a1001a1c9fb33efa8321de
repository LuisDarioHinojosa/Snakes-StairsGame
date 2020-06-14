/*
 * Player.h
 *
 *  Created on: 17 may. 2020
 *      Author: luisd
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include<iostream>
using namespace std;

class Player {
public:
	Player(string name);
	Player() = default;
	// updates score of a player by 1
	void update_score();
	// basic info borad
	virtual void print();
	// lifes ++
	void one_up();
	//coins ++
	void coin_up();
	// death
	void death();
	// sets life to cero after death
	void damage();
	// when a player receibes damage
	void life_boost();
	// spend earned coind in life
	bool death_message();
	// ask player if he eants to continue
	void reset_dead_player();
	void many_coins(int);
	void score_boost(int);
	void lots_of_damage(int);
	string getUsername();
	void setUsername(string name);

protected:
	string username;
	int score;
private:
	int lives;
	bool alive;
	int coins;
};


#endif /* PLAYER_H_ */
