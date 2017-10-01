//BuggyCode Fix 1 : Added Required Preprocessor Directories (153169 Ahmed Jamil)
#include<iostream>
using namespace std;

int main()
{
	cout << "This program will crash"
		 << endl;
	//BuggyCode Fix 2: Changed 'nSum' datatype to 'float' and initialized to 0 (153169 Ahmed Jamil)
	int nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	//BuggyCode Fix 3: Brought 'nValue' declaration out of the loop (153169 Ahmed Jamil)
	int nValue;
	while(true)
	{
		// enter another number to add
		
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
		nSum += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}
