#include <iostream>

using namespace std;

int main()
{

	int first_argument;	//º¯¼ö¼±¾ð
	int second_argument;
	cout << "Enter first argument: ";
	cin >> first_argument;
	cout << "Enter second argument: ";
	cin >> second_argument;
	cout << first_argument << " * " << second_argument	//°ö¼À
		<< " = " << first_argument * second_argument
		<< endl;
	cout << first_argument << " + " << second_argument	//µ¡¼À
		<< " = " << first_argument + second_argument
		<< endl;
	cout << first_argument << " / " << second_argument	//³ª´°¼À
		<< " = " << first_argument / second_argument
		<< endl;
	cout << first_argument << " - " << second_argument	//»¬¼À
		<< " = " << first_argument - second_argument
		<< endl;
}