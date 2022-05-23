#include <iostream>
#include <string>

using namespace std;

int main() {
	string password;
	string username;

	cout << "Enter your password :" << endl;
	getline(cin, password, '\n');
	cout << "Enter your username :" << endl;
	getline(cin, username, '\n');

	if (username == "root" && password == "xyzzy") {
		cout << "Access allowed" << endl;
	}
	else {
		cout << "Bad username or password. Denied access !" << endl;
		return 0;
	}
}