#include "Bulbasaur.hpp"
#include "Charmander.hpp"
#include "Pikachu.hpp"
#include <string>
#include <iostream>
#include <vector>

using namespace std;


void save(string filename, const vector<Pokemon> pokemons)
{
	for(Pokemon poke:pokemons)
	{
		 poke.save(filename);
	}

}

int main()
{
	vector<Pokemon> pokemons;
	Bulbasaur bulba("Bulba");
	Charmander charm("Charm");
	Pikachu pika("Pika");
	pokemons.push_back(bulba);
	pokemons.push_back(pika);
	pokemons.push_back(charm);
	cout<<bulba.GetName()<<endl;
	cout<<charm.GetName()<<endl;
	cout<<pika.GetName()<<endl;
	save("pokemons.txt", pokemons);

}