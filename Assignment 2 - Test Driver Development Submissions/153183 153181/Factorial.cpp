#include<iostream>
using namespace std;

int anyfac(int x)
{
	int ans = 1;
	for (int i = 1; i <= x; i++)
	{
		ans = ans*i;
	}

	return ans;
}
int main()
{
	int x,result;
  
      cout << "Enter Any Number: ";
      cin >> x;
      
    while(true)
    {
	  
	  if(cin.fail())
	   {
	  	 cout << "Not An Int - Try Again!" << endl << endl;
	  	 cout << "Enter Any Number: ";
	  	 cin.clear();
	  	 cin.ignore(256,'\n');
         cin >> x;       
	   }
	   
	 else if(cin.get() != '\n')
	   {
         cout << "Float Value - Enter Int - Try Again!" << endl << endl;
	  	 cout << "Enter Any Number: ";
	  	 cin.clear();
	  	 cin.ignore(256,'\n');
         cin >> x;	 	
	   } 
	    
	  else
	   {
	  	 if(x<0)
		   {
		   	 cout << "Negative Int - Enter Number greater or equal to zero - Try Again!" << endl << endl;
		  	 cout << "Enter Any Number: ";
             cin >> x;
		   }
		else 
		   {
		     break; 
		   }   
	   }
    }
    
	result = anyfac(x);
	cout << "\nThe Factorial of " << x << " is = " << result << endl;
}
