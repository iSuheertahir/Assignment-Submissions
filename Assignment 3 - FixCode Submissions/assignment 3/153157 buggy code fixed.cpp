// SE assignment 3.cpp : Defines the entry point for the console application.
//code fixed by Muhammad Omer Affan
//Roll# 153157

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "This program will certainly NOT crash!\n";

	int nSum = 0;
	int nNums = 0 ;
	int nValue;
	bool valid = false;
	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	while (true)
	{
		// enter another number to add
	label1:
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;
		// validate input i.e. numeric input only
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "Please enter an Integer only." << endl;
			goto label1;
		}
		

		// if the input number is negative...
		if (nValue < 0)
		{
			// ... then output the average
			cout << "Average is: " << nSum / nNums << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
		nSum += nValue;
		//increment the number count
		nNums++;
	}

	cin.ignore(10000, '\n');
	system("pause");
	return 0;
}
