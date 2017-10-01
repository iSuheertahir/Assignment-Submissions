//Abdullah 
//153181
//Assignment # 03
//

// Read code below and try to identify any bug and then fix it. 


#include<iostream>
using namespace std;

int main()
{
	cout << "Now This program will not crash"
		 << endl;

	int nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
		nNums = 0;
	nSum=0;

	while(true)
	{
		int nValue;
		
		CheckInput:
		
		
		cout << "Enter a number:";
	
		cin >> nValue;
		cout << endl;
		
		//loop to check input
		//while(!(cin.good())||cin.get() != '\n')

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
		++nNums;
	}

	cin.ignore(10000, '\n');
	return 0;
}
