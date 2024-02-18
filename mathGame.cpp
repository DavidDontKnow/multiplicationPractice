#include <iostream>
using namespace std;
#include <ctime>
#include <iomanip>


int main() {

	srand(time(0));
	char playAgain;
	int howMany;
	int guess;
	int attempts;
	double accuracy;

	

	do {
		attempts = 0;
		
		cout << "How many math problems would you like to solve? ";
		cin >> howMany;

		for (int i = 0; i < howMany; i++) {
			int num1 = rand() % 12 + 1;
			int num2 = rand() % 12 + 1;
			int answer;
			answer = num1 * num2;
			cout << answer << endl; 

			do {
				cout << num1 << " X " << num2 << " = ";
				cin >> guess;
				attempts++; 
			} while (guess != answer);
			cout << "Correct!" << endl;
		}

		accuracy = (double)howMany / (double)attempts;
		accuracy = accuracy * 100;
		cout << "------ Thank you for completing your mission! ------" << endl;
		cout << "Problems: " << howMany << " Guesses: " << attempts << " Accuracy: " << accuracy << "%" << endl;
		cout << "Would you like to play again? (y/n) ";
		cin >> playAgain;

	} while (toupper(playAgain) == 'Y');
	
	 
	cout << "---------------------------------------------------------" << endl;
	cout << "Thanks for playing!" << endl;
	cout << "---------------------------------------------------------" << endl;
	
	return 0;	
}