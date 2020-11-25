
#include "Pokemon.hpp"
using namespace std;

Pokemon::Pokemon(string name, int hp, int attack, int defence, int speed)
{
	this->name = name;
	this->hp = hp;
	this->attack = attack;
	this->defence = defence;
	this->speed = speed;
}

void Pokemon::save(string filename)
{
	ofstream file;
	file.open(filename, ios::app);
	file<<name<<endl;
	file<<hp<<endl;
	file<<attack<<endl;
	file<<defence<<endl;
	file<<speed<<endl;
	file.close();
}