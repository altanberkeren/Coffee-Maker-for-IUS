#pragma once

#include <iostream>
#include "QualityOfLife.h"

// These are just there to make life easier.
using std::cin;
using std::cout;
using std::endl;
using std::string;

/*
Note to self : 
* - Fix the true false stuff.
*  - Remove switch case statements.
*/

/*
* 
*cin.clear();
*cin.ignore(numeric_limits<streamsize>::max(), '\n');
*/

/*
int coffeeCups[5] = { 3,3,3,3,3 }; //Number of each coffee
double coffeePrices[5] = { 2,2,3.5,3,1.5 }; //Prices of coffees
int CoffeePosition; //Index of chosen coffee
double Change; //Change that will be given back
long double coinsValue[7] = { 0.05,0.1,0.2,0.5,1,2,5 }; //Value of coins
int coinsAmount[7] = {3,3,3,3,3,3,3}; //Amount of coins
bool coinsAllowed[7] = {true, true, true, true, true, true, true}; //Acceptable coins
system ("cls");
return; if ya wanna exit a void func.
*/

void coffeeInvent(int cAmnt[], string cTypes[]) {
	short choice;
	int temp;

	start:
	cls();
	cout << "Which type of coffee would you like to change the amount of?" << endl;
	for (short i = 0; i < 5; i++) {
		cout << (i + 1) << ") " << cTypes[i] << ": " << cAmnt[i] << endl;
	}
	cout << "6) Return." << endl << "~> ";
	cin >> choice;
	
	if ((choice >= 1) && (choice <= 5)) {
		cout << cAmnt[choice - 1] << " ~> ";
			cin >> temp;
			if (!isPos(temp)) { goto start; }
			else { cAmnt[choice - 1] = temp; } // Checks if the Users input is pos, if it is it goes aheada with the change.
		goto start;
	}
	else if (choice == 6) {
		cls();
		return;
	}
	else{
		cout << "Your input is invalid, try again";
		cinFlush();
		pause();
		goto start;
	}

}

void coinInvent(int coinAmnt[], const long double arrVal[]) {
	short choice;
	int temp;

	start:
	cls();
	cout << "Which coin amount would you like to change?" << endl;
	for (short i = 0; i < 7; i++) {
		cout << (i + 1) << ") " << arrVal[i] << ": " << coinAmnt[i] << endl;
	}
	cout << "8) Return." << endl << "~> ";
	cin >> choice;

	if ((choice >= 1) || (choice <= 7)) {
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> temp;
		goto start;
	}

	switch (choice){
	case 1:
		cout << coinAmnt[choice-1] << " ~> ";
		cin >> coinAmnt[choice-1];
		goto start;

	case 2:
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> coinAmnt[choice - 1];
		goto start;

	case 3:
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> coinAmnt[choice - 1];
		goto start;

	case 4:
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> coinAmnt[choice - 1];
		goto start;

	case 5:
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> coinAmnt[choice - 1];
		goto start;

	case 6:
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> coinAmnt[choice - 1];
		goto start;

	case 7:
		cout << coinAmnt[choice - 1] << " ~> ";
		cin >> coinAmnt[choice - 1];
		goto start;

	case 8:
		cls();
		return;


	default:
		cout << "Your input is invalid, try again";
		pause();
		goto start;
	}
}

void changePrices(double cPrices[], string cTypes[]) {
	short choice;

	start:
	cls();
	cout << "Which coffee prices would you like to change?" << endl;
	for (short i = 0; i < 5; i++) {
		cout << (i + 1) << ") " << cTypes[i] << ": " << cPrices[i] << endl;
	}
	cout << "8) Return." << endl << "~> ";
	cin >> choice;

	switch (choice){
	case 1:
		cout << cPrices[choice-1] << " ~> ";
		cin >> cPrices[choice-1];
		goto start;

	case 2:
		cout << cPrices[choice - 1] << " ~> ";
		cin >> cPrices[choice - 1];
		goto start;

	case 3:
		cout << cPrices[choice - 1] << " ~> ";
		cin >> cPrices[choice - 1];
		goto start;

	case 4:
		cout << cPrices[choice - 1] << " ~> ";
		cin >> cPrices[choice - 1];
		goto start;

	case 5:
		cout << cPrices[choice - 1] << " ~> ";
		cin >> cPrices[choice - 1];
		goto start;

	case 6:
		cout << cPrices[choice - 1] << " ~> ";
		cin >> cPrices[choice - 1];
		goto start;

	case 7:
		cout << cPrices[choice - 1] << " ~> ";
		cin >> cPrices[choice - 1];
		goto start;

	case 8:
		cls();
		return;

	default:
		cout << "Your input is invalid, try again";
		pause();
		goto start;
	}
}

void coinRule(bool arrAllow[], const long double arrVal[]) {
short choice;
char allow;

start:
cls();
cout << "Which coin type would you like to Allow/Disallow?" << endl;

for (short i = 0; i < 7; i++) {
	cout << (i + 1) << ") " << arrVal[i] << " BAM, it is set to: " << arrAllow[i] << endl;
}
cout << "8) Return." << endl << "~> "; // If the user made a mistake and wanted to go back.
cin >> choice;

cout << "Set to true(t) or false(f): " << endl;

switch (choice){
		case 1:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else{
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 2:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else {
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 3:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else {
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 4:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else {
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 5:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else {
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 6:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else {
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 7:
			if (arrAllow[(choice - 1)]) {
				cout << arrVal[(choice - 1)] << " is allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = false;
				}
			}
			else {
				cout << arrVal[(choice - 1)] << " is not allowed, set to: " << endl << "~> ";
				cin >> allow;
				if (arrAllow[(choice - 1)] != allow) {
					arrAllow[(choice - 1)] = true;
				}
			}
			goto start;
			break;

		case 8:
			cls();
			return;

		default:
			cout << "Your input is invalid, try again";
			pause();
			goto start;
		}
}

void settingModeMenu(const long double arrVal[], double cPrices[], string cTypes[], int coinAmnt[], int cAmnt[], bool arrAllow[]) {
	short choice;

start:
	cout << "Which menu would you like to access?" << endl;
	cout << "OPTIONS:\n1) Available coffee\n2) Stored coins\n3) Change prices\n4) Change Allowed coins\n5) Return." << "\n~> ";
	cin >> choice;

	switch (choice) {
	case 1:
		coffeeInvent(cAmnt, cTypes);
		break;

	case 2:
		coinInvent(coinAmnt, arrVal);
		break;

	case 3:
		changePrices(cPrices, cTypes);
		break;

	case 4:
		coinRule(arrAllow, arrVal);
		break;

	case 5:
		cls();
		return;

	default:
		cout << "Your input is invalid, try again";
		pause();
		goto start;
	}
	goto start;
}