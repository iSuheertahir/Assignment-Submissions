#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "\n             This Program Will Accumulate Input Numbers Until \n                   The User Enters a Negative Number, \n                      Then It Returns The Average\n"
		 << endl;

	float total_Sum = 0.0;                     
	int total_Nums  = 0;                    
    float Value;
	float rslt;                   
	
	while(true)
	{                         
		cout << "\n - Enter Any Number: ";
		cin  >> Value;
		cout << endl;
		
		if(cin.fail() || cin.get() != '\n')
	    {
	  	    cout << "Not A Number - Try Again!" << endl << endl;
	  	    cin.clear();
	  	    cin.ignore(256,'\n');     
	    }

		else if(Value < 0)
		{
			rslt = total_Sum / total_Nums;
			cout << "\n\n - Average is = " << fixed << setprecision(1) << total_Sum << " / " << total_Nums << " = "
			     << rslt << endl;              
			break; 
		}
		
		else
		{
			total_Sum += Value;         
		    total_Nums += 1;
		}
			                
	}

	return 0;
}
