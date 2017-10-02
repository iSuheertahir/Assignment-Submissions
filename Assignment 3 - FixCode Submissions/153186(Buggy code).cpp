//Sajjad Safdar
//153186


#include<iostream>
using namespace std;

int main()
{
	cout << "This is a Crash Program"<< endl;

	int nSum;
	int nNums;
	int nValue;

	
		nNums = 0;
	nSum=0;

	while(true)
	{
		//input validation
		
		// label 
		CheckInput:
		
		//prompt
		cout << "Enter a Value:";
		
		//tking input
		cin>>nValue;
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
