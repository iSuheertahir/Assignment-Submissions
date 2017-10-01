// Read code below and try to identify any bug and then fix it.
//JUNAIDSAEED
//ROLL#153172
//Adding the header files

#include<iostream>

//adding the namespace standard library

using namespace std;
int main()
{
	cout << "This program will crash"
		 << endl;
//Initializing the Sum with Zero
	int nSum=0;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	while(true)
	{
		// enter another number to add
		int nValue;
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
		//Proper use Of Incrementation Operator nNums++
		nNums++;
		nSum += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}
