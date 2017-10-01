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
while (cin.fail()) // Input Validation: Accept only Integers.
{
cin.clear();
 cin.ignore();
cout << "Invalid Input. Enter an Integer as a Number: " << endl;
cin >> nValue;
}
// if the input number is negative...

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