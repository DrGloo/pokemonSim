#include <iostream>
#include <string>
#include <vector>

using namespace std;
string selectedPokemon;

int main() {

	//
	vector<string> pokemons;

	pokemons.push_back("Charizard");
	pokemons.push_back("Blastoise");
	pokemons.push_back("Raichu");

	cout << "My Current Pokemons: " << endl;

	for (string selectedPokemon : pokemons) {
		cout << selectedPokemon << endl;
	}
	cout << "What Pokemon would you like to drop off" << endl;
	cin >> selectedPokemon;
	pokemons.push_back(selectedPokemon);
	cout << "You dropped off " << selectedPokemon << endl;
	cout << "Your Current Pokemons is now : " << endl;
	for (string selectedPokemon : pokemons) {
		cout << selectedPokemon << endl;
	}
}
