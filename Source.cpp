#include "main.h"  //About me Program
#include <random>
using namespace std;

int main() //myMainFunction 
{
	random_device rd;
	string selectedPokemon;
	string selectedMove;
	cout << "Select Blastoise or Charizard" << endl;
	cin >> selectedPokemon;
	cout << "You Selected " << selectedPokemon << endl;
	string myPokemon[2] = { "Charizard", "Blastoise" };
	int myPokemonHealth[2] = { 120, 120 };
	string myType[2] = { "Fire", "Water" };
	string charizardMoves[4] = { "Flamethrower", "Fly", "DragonClaw", "Earthquake" };
	string blastoiseMoves[4] = { "HydroPump", "Surf", "Bite", "IceBeam" };
	if (selectedPokemon == "Blastoise")
	{
		cout << "You encountered a Wild Charizard!" << endl;
		cout << "Battle!, Which move would you like Blastoise to use, ";
		cout << "Blastoise : " << myPokemonHealth[0] << endl;
		cout << blastoiseMoves[0] << ", " << blastoiseMoves[1] << ", " << blastoiseMoves[2] << ", " << blastoiseMoves[3] << endl;
		cin >> selectedMove;
		if (selectedMove == "HydroPump")
		{
			int enemyChoice = rd() % 3;
				cout << "Blastoise used Hydro Pump on Charizard, it was Super Effective ";
				myPokemonHealth[1] = myPokemonHealth[1] - 30;
				cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		else if (selectedMove == "Surf")
		{
			cout << "Blastoise used Surf on Charizard, it was Super Effective ";
			myPokemonHealth[1] = myPokemonHealth[1] - 24;
			cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		else if (selectedMove == "Bite")
		{
			cout << "Blastoise used Bite on Charizard, ";
			myPokemonHealth[1] = myPokemonHealth[1] - 14;
			cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		else if (selectedMove == "IceBeam")
		{
			cout << "Blastoise used Ice Beam on Charizard, it wasn't very effective";
			myPokemonHealth[1] = myPokemonHealth[1] - 5;
			cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		cout << "Battle!, Which move would you like Blastoise to use, ";
		cout << "Blastoise : " << myPokemonHealth[0] << endl;
		cout << blastoiseMoves[0] << ", " << blastoiseMoves[1] << ", " << blastoiseMoves[2] << ", " << blastoiseMoves[3] << endl;
		cin >> selectedMove;
		if (selectedMove == "HydroPump")
		{
			int enemyChoice = rd() % 3;
				cout << "Blastoise used Hydro Pump on Charizard, it was Super Effective ";
				myPokemonHealth[1] = myPokemonHealth[1] - 30;
				cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		else if (selectedMove == "Surf")
		{
			cout << "Blastoise used Surf on Charizard, it was Super Effective ";
			myPokemonHealth[1] = myPokemonHealth[1] - 24;
			cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		else if (selectedMove == "Bite")
		{
			cout << "Blastoise used Bite on Charizard, ";
			myPokemonHealth[1] = myPokemonHealth[1] - 14;
			cout << "Charizard : " << myPokemonHealth[1] << endl;
		}
		else if (selectedMove == "IceBeam")
		{
			cout << "Blastoise used Ice Beam on Charizard, it wasn't very effective";
			myPokemonHealth[1] = myPokemonHealth[1] - 5;
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
