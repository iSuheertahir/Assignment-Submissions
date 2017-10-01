#include <iostream>

using namespace std;
int fact=1;


///stubs
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
	
//asserts	
	
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


int main() {
	label:
    
    int x,result=0;
    cout<<"Enter the number\n";
    cin >> x;
    check:
    	//chec:
    if(x<0)
		{
        cout << "Error: Please enter a positive number" << endl;
        cout<< "Please re-enter:  ";
        goto label;
		}

    while(cin.fail()||cin.get() != '\n') {
    	if(x<0)
		{
        cout << "Error: Please enter a positive number" << endl;
        cin.clear();
       cin.ignore(256,'\n');
       cout<< "Please re-enter:  ";
        goto label;}
        else{
		
       cout << "Error: Please enter a positive number" << endl;
        cin.clear();
       cin.ignore(256,'\n');
       cout<< "Please re-enter:  ";
        goto label;
    }}
    cout << "You enter the "<<x<<endl;//<<"and now we are going for calculating the factorial\n" << endl;
    cout<<"First we check the simple Fcatorial calculations\n";
    result=getFactorial(x);
    cout<<"the factorial of "<<x<<" is = "<<result;
}
    
 
