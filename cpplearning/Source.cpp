// Main.cpp
#include <iostream>
#include <cmath>
using namespace std;

void namesOutput() {
	const string myName = "Alex Munoz";
	const int myAge = 16;
	cout << myName << endl;
	cout << myAge << endl;
	cout << myName << " is " << myAge << endl;
}

void mathSolver() {
	int x, y;
	cout << "Input a number: ";
	cin >> x;
	cout << "Input another number: ";
	cin >> y;
	int sum = x + y;
	cout << sum << endl;
}

void numberInput(string x) {
	cout << "The text inputed was: " << x << endl;
}

int other() {
	int x, y, sum, guessNum, needToSquare, squareAnswer;

	cout << "Hello, World!\n";
	cout << "New Line" << endl;
	cout << "New Line the other way" << endl;
	mathSolver();
	namesOutput();
	numberInput("random crap");
	cout << "Guess my number: ";
	cin >> guessNum;
	if (guessNum == 6) {
		cout << "Correct\n";
	}
	else if (guessNum == 5) {
		cout << "Close, but not right\n";
	}
	else if (guessNum == 7) {
		cout << "Close, but not right\n";
	}
	else {
		cout << "Not correct\n";
	}
	cout << "What do you want square rooted: ";
	cin >> needToSquare;
	squareAnswer = sqrt(needToSquare);
	cout << squareAnswer;

	return 0;
}
