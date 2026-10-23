//	P9-3.cpp	-	Dylan King	-	10/22/2026
//	This program converts a Roman number such as MCMLXXVIII to its decimal number representation.

#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);
int convertRomanToInt(string s);

int main() {
	cout << romanCharValue('I') << endl;
	cout << romanCharValue('V') << endl;
	cout << romanCharValue('X') << endl;
	cout << romanCharValue('L') << endl;
	cout << romanCharValue('C') << endl;
	cout << romanCharValue('D') << endl;
	cout << romanCharValue('M') << endl;

	cout << convertRomanToInt("X");
}

int convertRomanToInt(string s) {
	int total = 0;
	while (s != "") {
		if (romanCharValue(s[0]) >= romanCharValue(s[1]) || s.length() == 1) {
			total += romanCharValue(s[0]);
			s.erase(0, 1);
		}
		else {
			total += romanCharValue(s[1]) - romanCharValue(s[0]);
			s.erase(0, 2);
		}

	}
	return total;
}

int romanCharValue(char r) {
	r = tolower(r);
	if (r == 'i') {
		return 1;
	}
	else if (r == 'v') {
		return 5;
	}
	else if (r == 'x') {
		return 10;
	}
	else if (r == 'l') {
		return 50;
	}
	else if (r == 'c') {
		return 100;
	}
	else if (r == 'd') {
		return 500;
	}
	else if (r == 'm') {
		return 1000;
	}
	else exit;
}