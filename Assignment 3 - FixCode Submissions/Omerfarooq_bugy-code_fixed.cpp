
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

        if(num < 0)
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
