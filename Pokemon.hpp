#pragma once

#include <string>
#include <fstream>
using namespace std;

class Pokemon
{
	private:
		string name;
		int hp;
		int attack;
		int defence;
		int speed;
	public:
		Pokemon(string name, int hp=100, int attack = 25, int defence=10, int speed=10);
		/*Getters*/
		string GetName() {return name;}
		int GetHp () {return hp;}
		int GetAttack() {return attack;}
		int GetDefence() {return defence;}
		int GetSpeed() {return speed;}
		/*Setters*/
		void SetName(string name){this->name=name;}
		void SetHp(int hp){this->hp=hp;}
		void SetAttack(int attack){this->attack=attack;}
		void SetDefence(int defence){this->defence=defence;}
		void SetSpeed(int speed){this->speed=speed;}

		virtual void save(string filename);
};

