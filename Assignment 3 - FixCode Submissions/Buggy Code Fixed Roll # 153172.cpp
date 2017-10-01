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
	float nSum=0.0;
	float nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0.0;
	while(true)
	{
		// enter another number to add
	        Label:
		float nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;
		while(cin.fail()||cin.get() != '\n') 
		{
		cin.clear();
		cin.clear();
                cin.ignore(256,'\n');
       cout<< "Please re-enter:  "<<endl;
        goto Label;
	}

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
