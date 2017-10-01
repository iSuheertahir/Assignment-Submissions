//Ammara kalsoom
//153185
//Assignment # 03
//Task: Fix the code with alots of bugs
// Read code below and try to identify any bug and then fix it. 

//Header files
#include<iostream>
using namespace std;
//main function
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
	nSum=0;

	while(true)
	{
		//input validation
		
		// label 
		CheckInput:
		
		//prompt
		cout << "Enter a number:";
		
		//tking input
		cin >> nValue;
		cout << endl;
		
		//loop to check input
		//while(!(cin.good())||cin.get() != '\n')
		while((cin.fail())||cin.get() != '\n') 
		{
			cin.clear();
			
			//used for input validation
    	   	cin.ignore(256,'\n');
       		cout<< "Wrong input!!!  "<<endl;
       		cout<<"Enter Again"<<endl;
       		//Goto Statement
       	 	goto CheckInput;
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
		nSum += nValue;
		++nNums;
	}

	cin.ignore(10000, '\n');
	return 0;
}
