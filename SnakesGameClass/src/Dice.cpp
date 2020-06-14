/*
 * Dice.cpp
 *
 *  Created on: 17 may. 2020
 *      Author: luisd
 */

#include "Dice.h"
#include <iostream>
#include <stdlib.h>//#include <time.h>
using namespace std;

Dice::Dice(bool loaded): loaded(loaded)
{
	// TODO Auto-generated constructor stub

}

Dice::~Dice() {
	// TODO Auto-generated destructor stub

}
int Dice::throw_dice(){
	int result;
	if (this->loaded == false){
	result = rand() % 6 + 1;
	}
	else if(this->loaded == true){
		result = 5 + rand() % (( 6 + 1 ) - 5);
	}
	record.push_back(result);
	return result;
}


void Dice::show_records(){
	cout << "Play Records:" << endl;
	for (int i = 0; i < this->record.size(); i++){
		cout << "Throw " << i +1 << ": " << record[i] << endl;
	}
}

bool Dice::getLoaded(){
	return this->loaded;
}
