//Name Omer Farooq
//Roll NO: 153192

#include <iostream>
 using namespace std;
 int main()
 {
 	float nSum = 0.0;
 	int nNums =0;
 	int num;
    float Average;
 	while(true)
 	{
 		cout << "Enter another number:";
 		cin >> num;
 		cout << endl;

 		if(cin.fail() || cin.get() != '\n')
	    {
	  	    cout << "Your input is invalid!" << endl;
	  	    cin.clear();
	  	    cin.ignore(256,'\n');
	    }

 		else if(num < 0)
 		{
 			Average = nSum/nNums;
 			cout << "Average is: "
 				 << Average << endl;
 			break;
 		}


 		nSum += num;
 		nNums +=1;
 	}

 	return 0;
 }
