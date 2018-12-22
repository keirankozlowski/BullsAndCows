#include <iostream>
#include <string>
using namespace std;

int main() {
	// constant expressions
	constexpr int WORD_LENGTH = 5;

	// game intro
	cout << "Welcome to Bulls and Cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl << endl;

	// get a guess from the player
	string PlayerGuess = "";
	cout << "Enter your guess: ";
	getline(cin, PlayerGuess);

	// repeat the guess back to the player
	cout << "Your guess was: " << PlayerGuess << endl << endl;

	//// get a guess from the player
	cout << "Enter your guess: ";
	getline(cin, PlayerGuess);

	// repeat the guess back to the player
	cout << "Your guess was: " << PlayerGuess << endl << endl;

	return 0;
}