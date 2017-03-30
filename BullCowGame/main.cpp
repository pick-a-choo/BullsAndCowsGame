#include<iostream>
#include<string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

//Entry Point for our Application
int main()
{
	PrintIntro();
	
	PlayGame();
	AskToPlayAgain();

	return 0;

}

void PlayGame()
{
	//loop for number of turns asking for guesses
	constexpr int No_Of_Turns = 5;
	for (int count = 1;count <= No_Of_Turns;count++)
	{
		string Guess = GetGuess();
		cout << "Your guess was " << Guess << endl;
		cout << endl;
	}
}

bool AskToPlayAgain()
{
	cout<<"Do you want to play again?";
	string Response="";
	getline(cin,Response);

	cout<<"Is this a y? "<<(Response[0]=='y' || 'Y');
	cout<<endl;

	return false;
}

void PrintIntro()
{
	//Introduce the game
	constexpr int WORLD_LENGTH = 9;

	cout << "Welcome to Bulls & Cows Fun Word Game." << endl;
	cout << "Can youguess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuess()
{
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}