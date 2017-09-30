#include <iostream>
#include <assert.h>                       // header file for assertion (a part of unit testing)
using namespace std;

int main()
{
	cout << "This program will crash\n"
		 << endl;

	float nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	
	nNums = 0;
	while(true)
	{
		// enter another number to add
		float nValue;
		cout << "Enter another number: ";
		cin >> nValue;
		cout << endl;

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			
			cout << "what you think the average will be: ";          // Expected Output i-e: Average
			int your_avg;
			cin >> your_avg;
			cout << endl; 
			 
			int actual_avg = nSum/nNums;
			
			assert(actual_avg == your_avg);             // if this assertion failed, the logic of calculating average is Incorrect!
			
			cout << "\nAverage is: "
				 << actual_avg
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
