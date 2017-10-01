#include <iostream>

using namespace std;

int Zerofactoriaisone(int a)
{
    cout<<"Factorial of 0 is "<<1<<endl;
}
int Onefactoriaisone(int b)
{
    cout<<"Factorial of 1 is "<<1<<endl;

}
int Twofactoriaistwo(int c)
{
    cout<<"Factorial of 2 is "<<2<<endl;

}
int Threefactoriaissix(int d)
{
    cout<<"Factorial of 3 is "<<3*2*1<<endl;

}

int Fivefactoriaisonetwenty(int f)
{
    cout<<"Factorial of 5 is "<<120<<endl;

}
int main()
{
    int num;
    cout<<"________________________________________________\n";
    cout<<"Test Cases for Calculating the Factorials\n";
    cout<<"________________________________________________\n";
    cout<<"Enter The Number: ";
    cin>>num;
    cout<<endl;
    if (num==0)
    {
         Zerofactoriaisone(num);
    }
    else if (num==1)
    {
        Onefactoriaisone(num);
    }
    else if(num==2)
    {
        Twofactoriaistwo(num);
    }
    else if(num==3)
    {
        Threefactoriaissix(num);
    }
    else if (num==5)
    {
        Fivefactoriaisonetwenty(num);
    }
    else
    cout<<"Limit Exceeded!";
    
    return 0;
}


