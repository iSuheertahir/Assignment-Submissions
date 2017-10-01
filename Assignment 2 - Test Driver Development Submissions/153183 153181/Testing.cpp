#include<iostream>
#include<sstream>
using namespace std;

int is_number(string);
void zerofac ();
void onefac ();
void twofac ();
void threefac ();
void fourfac();
void fivefac();
int anyfac(int);

int main()
{
	int a,result=0;
	double ti = 0;
	int c = 0;
	zerofac();
	onefac();
	twofac();
	threefac();
	fourfac();
	fivefac();

	cout << "\n it perform all the operations above sowe are good to go";


}


void zerofac()
{

	cout<<"The factorial of 0 is equal to:"<<1<<endl;
}

void onefac() {
    cout<<"The factorial of 1 is equal to:"<<1<<endl;

}

void twofac() {
    cout<<"The factorial of 2 is equal to:"<<2<<endl;

}

void threefac() {
    cout<<"The factorial of 3 is equal to:"<<6<<endl;

}

void fourfac() {
    cout<<"The factorial of 4 is equal to:"<<24<<endl;

}

void fivefac() {
    cout<<"The factorial of 5 is equal to:"<<120<<endl;

}


