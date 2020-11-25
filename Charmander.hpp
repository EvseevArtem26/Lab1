#include <string>
#include "Pokemon.hpp"

class Charmander:public Pokemon
{
public:
	Charmander(std::string name, int hp=100, int attack = 25, int defence=10, int speed=10):Pokemon(name, hp, attack, defence, speed){}
};