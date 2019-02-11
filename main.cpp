//
//  main.cpp
//  Uzduotis 1
//
//  Created by Emilis Baliukonis on 11/02/2019.
//  Copyright © 2019 Emilis Baliukonis. All rights reserved.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

string getBorder(int width) {
	string border = "";
	
	for (int i = 0; i < width; i++) {
		border += "*";
	}
	
	return border;
}

string getVerticalBorder(int width) {
	string border = "*";
	
	for (int i = 0; i < width - 2; i++) {
		border += " ";
	}
	
	border += "*";
	
	return border;
}

string getWelcomeLine(string text, int padding) {
	string line = "*";
	
	for (int i = 0; i < padding; i++) {
		line += " ";
	}
	
	line += text;
	
	for (int i = 0; i < padding; i++) {
		line += " ";
	}
	
	line += "*";
	
	return line;
}

string getWelcomeWord(string name) {
	if (name.back() == 's') {
		return "Sveikas";
	}
	
	return "Sveika";
}

string getWelcomeMessage(string name) {
	return getWelcomeWord(name) + ", " + name + "!";
}

int main(int argc, const char * argv[]) {
	int padding = 0;
	
	string name;
	string line;
	
	cout << "Įveskite vardą: ";
	cin >> name;
	
	do {
		cout << endl << "Įveskite rėmelio dydį (nuo 1 iki 10): ";
		cin >> padding;
	} while (padding < 1 || padding > 10);
	
	const string welcomeText = getWelcomeMessage(name);
	const int width = welcomeText.length() + 2 + padding * 2;
	
	// Horizontal border
	cout << getBorder(width) << endl;
	
	// Vertical spacing
	line = getVerticalBorder(width);
	for (int i = 0; i < padding; i++) {
		cout << line << endl;
	}
	
	// Welcome line
	line = getWelcomeLine(welcomeText, padding);
	cout << line << endl;
	
	// Vertical spacing
	line = getVerticalBorder(width);
	for (int i = 0; i < padding; i++) {
		cout << line << endl;
	}
	
	// Horizontal border
	cout << getBorder(width) << endl;
	
	return 0;
}
