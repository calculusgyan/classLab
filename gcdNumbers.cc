#include <iostream>
using namespace std;

// Function declaration
int greatestDivisor(int number, int number1);


int main(){
	int firstNumber, secondNumber, gcd_answer;

	cout << "\n A program to compute for the greatest common divisor of two numbers." << endl;
	cout <<"\n Enter the first number: ";
	cin >> firstNumber;
	cout << "\n Enter second number: ";
	cin >> secondNumber;

	gcd_answer = greatestDivisor(firstNumber, secondNumber);

	cout << "\n The greatest common divisor of " << firstNumber << " and " << secondNumber << " is " << gcd_answer << endl;

	return 0;
}


//Function Definition
int greatestDivisor(int number, int number1){
	if(number1 != 0)
		return greatestDivisor(number1, number % number1);

	else
		return number;
}
