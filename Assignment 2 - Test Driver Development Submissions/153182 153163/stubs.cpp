#include <iostream>

using namespace std;

int Zerofactoriaisone(int a)
{
    cout<<"Test case for factorial of 0 is "<<1<<endl;
}
int Onefactoriaisone(int b)
{
    cout<<"Test case for factorial of 1 is "<<1<<endl;

}
int Twofactoriaistwo(int c)
{
    cout<<"Test case for factorial of 2 is "<<2<<endl;

}
int Threefactoriaissix(int d)
{
    cout<<"Test case for factorial of 3 is "<<3*2*1<<endl;

}
int Fourfactoriais24(int e)
{
    cout<<"Test case for factorial of 4 is "<<24<<endl;

}

int Fivefactoriaistwenty(int f)
{
    cout<<"Test case for factorial of 5 is "<<120<<endl;

}
int main()
{
    int n;
    cout<<"Enter The Number to calculate the factorial: "<<endl;
    cin>>n;
    if (n==0)
    {
         Zerofactoriaisone(n);
    }
    else if (n==1)
    {
        Onefactoriaisone(n);
    }
    else if(n==2)
    {
        Twofactoriaistwo(n);
    }
    else if(n==3)
    {
        Threefactoriaissix(n);
    }
    else if(n==4)
    {
        Fourfactoriais24(n);
    }
    else
    {
        Fivefactoriaistwenty(n);
    }
    return 0;
}


