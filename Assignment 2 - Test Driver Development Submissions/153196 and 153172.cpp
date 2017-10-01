//	TDD-Lab (Factorial Program)
//	Junaid Saeed (153172) and Ahsan Javed (153196)
//	BS(CS)-V
//	Requriment: C++ 11
//	Bulid on Microsoft Visual Studio (Visual C++) 
#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Factorial 
{
	private:
	int fact = 1;

	/* Asserts Functions*/
	bool iszerofactorialisone(int n) {
		if (n == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isonefactorialisone(int n) {
		if (n == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	bool istwofactorialistwo(int n) {
		if (n == 2) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isthreefactorialissix(int n) {
		if (n == 3) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isfivefactorialisonetwenty(int n) {
		if (n == 5) {
			return true;
		}
		else {
			return false;
		}
	}


	/* Stubs Functions*/
	int zerofactorialisone(int n) {
		cout << "Input: " << n << endl;
		return 1;
	}
	int onefactorialisone(int n) {
		cout << "Input: " << n << endl;
		return 1;
	}
	int twofactorialistwo(int n) {
		cout << "Input: " << n << endl;
		return 2;
	}
	int threefactorialissix(int n) {
		cout << "Input: " << n << endl;
		return 6;
	}
	int fivefactorialisonetwenty(int n) {
		cout << "Input: " << n << endl;
		return 120;
	}

	public:

	int getFactorial(int n) {
		if (iszerofactorialisone(n) == true) {
			fact = zerofactorialisone(n);
		}
		else if (isonefactorialisone(n) == true) {
			fact = onefactorialisone(n);
		}
		else if (istwofactorialistwo(n) == true) {
			fact = twofactorialistwo(n);
		}
		else if (isthreefactorialissix(n) == true) {
			fact = threefactorialissix(n);
		}
		else if (isfivefactorialisonetwenty(n) == true) {
			fact = fivefactorialisonetwenty(n);
		}
		else {
			cout << "Input: " << n << endl;
			fact = 1;
			for (int i = 1; i <= n; i++) {
				fact = i*fact;
			}
		}
		return fact;
	}

	bool isValidate(string strNumber) {
		regex integer("(\\+)?[[:digit:]]+");
		if (regex_match(strNumber, integer)) {
			return true;
		}
		else {
			return false;
		}
	}
};


int main()
{
	Factorial obj;
	string strNumber;
	int num;
	cout << "Enter a number: ";
	cin >> strNumber;

	while (!obj.isValidate(strNumber)) {
		cout << "\nInvalid Input!" << endl;
		cout << "Please enter a number again: ";
		cin >> strNumber;
	}
	num = stoi(strNumber);
	cout << "----------------------------------------------" << endl;
	cout << "Result: " << obj.getFactorial(num) << endl;
	cout << "----------------------------------------------" << endl;
	system("PAUSE");
	return 0;
}

