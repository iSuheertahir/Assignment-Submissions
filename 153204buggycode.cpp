#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{

	float nSum=0.0;
	float nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0.0;
	while(true)
	{
		// enter another number to add
		float nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			cout << "Average is: "
				 << nSum/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
                nNums++;
		nSum += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}