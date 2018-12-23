#include <iostream>
#include <string>
using namespace std;

void GameIntro();
string GetPlayerGuessesAndPrint();

// entry point for app
int main() {
	// variables
	constexpr int ROUNDS = 5;

	GameIntro();

	for (int i = 0; i < ROUNDS; i++) {
		GetPlayerGuessesAndPrint();
	}

	cout << endl;
	return 0;
}

void GameIntro() {
	// variables
	constexpr int WORD_LENGTH = 5;

	// game intro text output
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl << endl;

	return;
}

string GetPlayerGuessesAndPrint() {
	// variables
	string PlayerGuess = "";

	// get a guess from the player
	cout << "Enter your guess: ";
	getline(cin, PlayerGuess);

	// repeat the guess back to the player
	cout << "Your guess was: " << PlayerGuess << endl << endl;
	
	return PlayerGuess;
}