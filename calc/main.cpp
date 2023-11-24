#include <iostream>
#include "command.hpp"

using namespace std;

int main(int argc, char** argv) {
	unsigned char type;
	bool flag=true;
	while(flag) {
		cout << "------------------\n(h) For help\n(e) To exit\nEnter Your type: ";
		cin >> type;
		switch(type) {
			case 'a':
				cout << parseAddition() << endl;
			break;
			case 'm':
				cout << parseSubtraction() << endl;
			break;
			case 'u':
				cout << parseMultiplication() << endl;
			break;
			case 'd':
				cout << parseDivision() << endl;
			break;
			case 'p':
				cout << parseExponentiation() << endl;
			break;
			case 'r':
				cout << parseSquareRoot() << endl;
			break;
			case 's':
				cout << parseSine() << endl;
			break;
			case 'c':
				cout << parseCosine() << endl;
			break;
			case 't':
				cout << parseTangent() << endl;
			break;
			case 'h':
				help();
			break;
			case 'e':
				flag=false;
			break;
			default:
				cout << error() << endl;
			break;
		}
	}
	return 0;
}
