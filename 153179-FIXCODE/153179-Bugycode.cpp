// Read code below and try to identify any bug and then fix it. 
// Name: Junaid Iqbal Raja
// Roll#153179

// Fix#1 Add iostream library for cin and out object
#include <iostream>
using namespace std;
int main()
{
	cout << "This program will crash"
		 << endl;

	int nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	while(true)
	{
		// enter another number to add
		int nValue;
		InputCheckpoint:
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;

		// Fix#3 Input validation 
		if(cin.fail() || cin.get()!='\n')
		{
			cin.clear();
			cin.ignore(999999, '\n');
			cout << "You have entered invalid number"<<endl;
			goto InputCheckpoint;
		}

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			// Fix#4 Type casting
			cout << "Average is: "
				 << static_cast<float>(nSum)/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
		nSum += nValue;
		
		//Fix#2 Increment nNums variable
		nNums++;
	}

	cin.ignore(10000, '\n');
	return 0;
}

