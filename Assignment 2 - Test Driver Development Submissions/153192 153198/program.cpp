#include<iostream>
using namespace std;

int anyfac(int a)
{
	int ans = 1;
	for (int i = 1; i <= a; i++)
	{
		ans = ans*i;
	}

	return ans;
}
int main()
{
	int a,result=0;
	

	cout<<"enter the number\n";
	cin>>a;
	result=anyfac(a);
	cout<<"the factorial of "<<a<<" is = "<<result;
}
