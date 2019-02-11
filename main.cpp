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

string getWelcomeLine(string text) {
    return "* " + text + " *";
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
    string name;
    
    cout << "Įveskite vardą: ";
    cin >> name;
    
    const string welcomeText = getWelcomeMessage(name);
    const int width = welcomeText.length() + 4;
    
    const string line1 = getBorder(width);
    const string line2 = getVerticalBorder(width);
    const string line3 = getWelcomeLine(welcomeText);
    const string line4 = getVerticalBorder(width);
    const string line5 = getBorder(width);
    
    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << line4 << endl;
    cout << line5 << endl;
    
    return 0;
}
