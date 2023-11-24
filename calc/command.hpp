#include <iostream>
#include <string>
#include <math.h>

using namespace std;
/**
 @brief Finding the sum of two numbers
 @details
 A function
 @param n1 float
 @param n2 float

 @return result additions of 2 numbers
 */
float parseAddition() {
	float a=0, b=0;
	cout << "first value: ";
	cin >> a;
	cout << "second value: ";
	cin >> b;
	return a + b;
}

float parseSubtraction() {
	float a=0, b=0;
	cout << "first value: ";
	cin >> a;
	cout << "second value: ";
	cin >> b;
	return a - b;
}

float parseMultiplication() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	return a * b;
}

float parseDivision() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	if(b != 0) {
		return a / b;
	}else{
	return 0;
	}
}

float parseExponentiation() {
	float a=0, r=0;
	int b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	r=pow(a, b);
	return r;
}

float parseSquareRoot() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=sqrt(a);
	return r;
}

float parseSine() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=sin(a);
	return r;
}

float parseCosine() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=cos(a);
	return r;
}

float parseTangent() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=tan(a);
	return r;
}

void help() {
	cout << "\n\n";
	cout << " Calculator ------------------------------\n";
	cout << "\t a\t\t Addition of two number\n";
	cout << "\t m\t\t Subtraction of two number\n";
	cout << "\t u\t\t Multiplication of two number\n";
	cout << "\t d\t\t Division of two number\n";
	cout << "\t p\t\t Exponentiation of two number\n";
	cout << "\t r\t\t SquareRoot of a number\n";
	cout << "\t s\t\t Sine of anumber\n";
	cout << "\t c\t\t Cosine of anumber\n";
	cout << "\t t\t\t Tangent of a number\n";
	cout << "\t h\t\t Help\n";
	cout << "\t e\t\t Exit\n";
	cout << "\n\n";
}

string error() {
	cout << "Error : Input is anonymous!\n";
}
