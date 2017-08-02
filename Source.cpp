#include "main.h"  //About me Program
using namespace std;

int main() //myMainFunction 
{
	string selectedPokemon;
	string selectedMove;
	cout << "Select Blastoise or Charizard" << endl;
	cin >> selectedPokemon;
	cout << "You Selected " << selectedPokemon << endl;
	string myPokemon[2] = {"Charizard", "Blastoise"};
	int myPokemonHealth[2] = { 120, 120 };
	string myType[2] = { "Fire", "Water" };
	string charizardMoves[4] = { "Flamethrower", "Fly", "Dragon Claw", "Earthquake" };
	string blastoiseMoves[4] = { "Hydro Pump", "Surf", "Bite", "Ice Beam" };
	if (selectedPokemon == "Blastoise")
	{
		cout << "You encountered a Wild Charizard!" << endl;
		cout << "Battle!, Which move would you like Blastoise to use, ";
		cout << "Blastoise : " << myPokemonHealth[0] << endl;
		cout << blastoiseMoves[0] << ", " << blastoiseMoves[1] << ", " << blastoiseMoves[2] << ", " << blastoiseMoves[3] << endl;
		cin >> selectedMove;
		if (selectedMove == "Hydro Pump");
		{
			cout << "Blastoise used Hydro Pump on Charizard, ";
			myPokemonHealth[1] = myPokemonHealth[1] - 60;
			cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
	}
	else if (selectedPokemon == "Charizard")
	{
		cout << "You encountered a Wild Blastoise!" << endl;
		cout << "Battle!, Which move would you like Blastoise to use, ";
		cout << "Charizard : " << myPokemonHealth[1] << endl;
		cout << charizardMoves[0] << ", " << charizardMoves[1] << ", " << charizardMoves[2] << ", " << charizardMoves[3] << endl;
	}
}
