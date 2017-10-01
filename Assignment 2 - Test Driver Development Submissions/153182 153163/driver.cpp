#include<iostream>
using namespace std;
int FactFunction(int n)
{
    int counter,fact = 1;
     for (int counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }
  return fact;
}
int main()
{
    int num;
   cout<<"Enter the number to calculate the factorial: "<<endl;
   cin>>num;
   while(num<0)
   {
       cout<<"Invalid Input! Enter Positive Number please...."<<endl;
       cout<<"Enter the number to calculate the factorial: "<<endl;
       cin>>num;
   }

  cout<<"Factorial of "<<num<<" is "<<FactFunction(num)<<endl;

  return 0;
}



