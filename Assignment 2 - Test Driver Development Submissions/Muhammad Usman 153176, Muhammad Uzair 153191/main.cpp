#include <iostream>

using namespace std;
int factorial(int n)
{
    int i,fact = 1;
     for (int i = 1; i <= n; i++)
     {
         fact = fact * i;
     }
  return fact;
}





int main()
{
    int num;


    cout << "\_______________________________________________\n";
    cout << "            WELCOME TO TDD PROGRAM\n";
    cout << "_______________________________________________\n";

    cout<<"Enter the Number: ";
    cin>>num;
    while(num<0)
    {
        cout<<"Invalid Input!"<<endl;
        cout<<"Enter the Number Again: ";
        cin>>num;
    }
    cout<<"Factorial of "<<num<<" is "<<factorial(num);
    cout << "\n_______________________________________________\n";
    return 0;
}
