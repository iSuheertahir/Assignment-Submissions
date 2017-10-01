#include <iostream>

using namespace std;

int findfact(int a)
{
	int fact=1;
	if(a==0)
	{
		return fact;
	}
	else
	{
		for(int i=1;i<=a;i++)
		{
			fact=fact*i;
		}
		return fact;
	}
}


void test_fun(int a1,int a2)
{
    int ex=a2;
    int act=findfact(a1);
    if(ex==act)
    {
        cout<<"\n\nFactorial funtion is:          \tCORRECTED\n";
    }
            else
            cout<<"\n\nFactorial function is:           \tINCORRECTED\n";
}


void zerofactorialisone()
{
    int ex=1;
    int act=findfact(0);
    if(ex==act)
    {
        cout<<"\nZero factorial is One 0! = 1             \tCORRECTED\n";
    }
            else
            cout<<"\nZero factorial is One 0! = 1            \tFAILED\n";
}

void onefactoriaisone()
{
    int ex=1;
    int act=findfact(1);
    if(ex==act)
    {
        cout<<"\nOne factorial is One 1! = 1*0! = 1       \tCORRECTED\n";
    }
            else
            cout<<"\nOne factorial is One 1! = 1*0! = 1       \tFAILED\n";
}

void twofactoriaistwo ()
{
    int ex=2;
    int act=findfact(2);
    if(ex==act)
    {
        cout<<"\nTwo factorial is Two 2! = 2*1! = 2       \tCORRECTED\n";
    }
            else
            cout<<"\nTwo factorial is Two 2! = 2*1! = 2     \tFAILED\n";
}

void threefactoriaissix ()
{
    int ex=6;
    int act=findfact(3);
    if(ex==act)
    {
        cout<<"\nThree factorial is Six 3! = 3*2! = 6       \tCORRECTED\n";
    }
            else
            cout<<"\nThree factorial is Six 3! = 3*2! = 6     \tFAILED\n";
}

void fivefactorialisonetwenty ()
{
    int ex=120;
    int act=findfact(5);
    if(ex==act)
    {
        cout<<"\nFive factorial is 120 5! = 5*4*3*2! = 120       CORRECTED\n";
    }
            else
            cout<<"\nFive factorial is 120 5! = 5*4*3*2! = 120     FAILED\n";
}

int main()
{
    zerofactorialisone();
    onefactoriaisone();
    twofactoriaistwo ();
    threefactoriaissix ();
    fivefactorialisonetwenty ();
    
cout<<"\n\n -- Checked Manually --\n\n";

    test_fun(0,1);
    test_fun(1,1);
    test_fun(2,2);
    test_fun(3,6);
    test_fun(5,120);

    cout<<"\n\n\n\n -- Now you can check manually the funtion -- \n\n";


    int x=0,y=0;

    cout<<"\nEnter the number you want to find the factorial: ";
    cin >> x;
    
    while(true)
    {
	  
	  if(cin.fail())
	   {
	  	 cout << "Not An Int - Try Again!" << endl << endl;
	  	 cout << "Enter the number you want to find the factorial: ";
	  	 cin.clear();
	  	 cin.ignore(256,'\n');
         cin >> x;       
	   }
	   
	 else if(cin.get() != '\n')
	   {
         cout << "Float Value - Enter Int - Try Again!" << endl << endl;
	  	 cout << "Enter the number you want to find the factorial: ";
	  	 cin.clear();
	  	 cin.ignore(256,'\n');
         cin >> x;	 	
	   } 
	    
	  else
	   {
	  	 if(x<0)
		   {
		   	 cout << "Negative Int - Enter Number greater or equal to zero - Try Again!" << endl << endl;
		  	 cout << "Enter the number you want to find the factorial: ";
             cin >> x;
		   }
		else 
		   {
		     break; 
		   }   
	   }
    }
    
    cout<<"\n\nEnter the number you want to expact the answer: ";
    cin >> y;
    
    while(true)
    {
	  
	  if(cin.fail())
	   {
	  	 cout << "Not An Int - Try Again!" << endl << endl;
	  	 cout << "Enter the number you want to expact the answer: ";
	  	 cin.clear();
	  	 cin.ignore(256,'\n');
         cin >> y;       
	   }
	   
	 else if(cin.get() != '\n')
	   {
         cout << "Float Value - Enter Int - Try Again!" << endl << endl;
	  	 cout << "Enter the number you want to expact the answer: ";
	  	 cin.clear();
	  	 cin.ignore(256,'\n');
         cin >> y;	 	
	   } 
	    
	  else
	   {
	  	 if(y<0)
		   {
		   	 cout << "Negative Int - Enter Number greater or equal to zero - Try Again!" << endl << endl;
		  	 cout << "Enter the number you want to expact the answer: ";
             cin >> y;
		   }
		else 
		   {
		     break; 
		   }   
	   }
    }

	test_fun(x,y);

	return 0;
}
