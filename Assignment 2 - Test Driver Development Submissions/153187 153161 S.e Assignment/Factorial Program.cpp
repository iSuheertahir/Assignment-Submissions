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

int main() {
    
    int x,result=0;
    cout<<"Enter the number\n";
    cin >> x;
    check:
    	//chec:
    while(cin.fail()) {
        cout << "Invalid Input" << std::endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> x;
    }
    while(x<0){
    	 cout << "Invalid Input" << std::endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> x;
        goto check;
	}
    
    
    cout<<"Everything is working perfect now time for your calculation\n";
    result=findfact(x);
    cout<<"you enter "<<x<<" and the factorial of "<< x <<" is "<<result;
	return 0;
}
