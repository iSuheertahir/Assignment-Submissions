#include "stdafx.h"

#include<iostream>
#include<sstream> //string stream
using namespace std;

int is_number(string);
void zerofac (int, int); // stub zero
void onefac (int, int); // stub one
void twofac (int, int); // stub two
void threefac(int, int); //stub three
void fourfac(int, int); //stub four
void fivefac(int, int); //stub five
double anyfac(double); //Function for any factorial

int main()
{
	string a;
	double ti = 0;
	int c = 0;
	zerofac(0, 1);
	onefac(1, 1);
	twofac(2, 2);
	threefac(3, 6);
	fourfac(4, 24);
	fivefac(5, 120);

	cout << "\n All values are true which means the formula is right\n u can use the calculator\n\n";

	while (1)
	{

		f:
		getline(cin,a); // input string
		
		c = is_number(a);
		if (c == 2)
		{
			cout << a << " wrong input try again\n";
			goto f;
		}

		ti = atoi(a.c_str());

		ti = anyfac(ti);
		cout << a<<"! = " << ti << endl;
		
	}
	return 0;
}
int is_number( string s) {
	for (int i = 0; i < s.size(); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			return 2;
		}
	}
			return 5;
}

void zerofac(int a, int b) {
	int ans;
	if (a == 0)
	{
		ans = 1;
	}

	if (ans == b)
	{
		cout << " 0! = 1 True\n";
	}
	else
		cout << "False\n";
}

void onefac(int a, int b) {
	int ans;
	if (a == 1)ans = 1;

	if (ans == b)
	{
		cout << " 1! = 1 True\n";
	}
	else
		cout << "False\n";
}

void twofac(int a, int b) {
	int ans;
	if (a == 2)ans = 2 * 1;

	if (ans == b)
	{
		cout << " 2! = 2 True\n";
	}
	else
		cout << "False\n";
}

void threefac(int a, int b) {
	int ans;
	if (a == 3)ans = 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 3! = 6 True\n";
	}
	else
		cout << "False\n";
}

void fourfac(int a, int b) {
	int ans;
	if (a == 4)ans = 4 * 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 4! = 24 True\n";
	}
	else
		cout << "False\n";
}

void fivefac(int a, int b) {
	int ans;
	if (a == 5)ans = 5 * 4 * 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 5! = 120 True\n";
	}
	else
		cout << "False\n";
}

double anyfac(double a)
{
	double ans = 1;
	for (int i = 1; i <= a; i++)
	{
		ans = ans*i;
	}

	return ans;
}
