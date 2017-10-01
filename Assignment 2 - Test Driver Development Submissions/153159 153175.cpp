#include<iostream>
#include<sstream>
using namespace std;
// functions prototypes
int is_number(string);
void zerofac (int, int);
void onefac (int, int);
void twofac (int, int);
void threefac (int, int);
void fivefac(int, int);
//input validation function
int get_int(int min, string prompt)
{
	int intgr;
	string str_num;

	while(true) {

		cout << prompt;
		getline(cin, str_num); //get string input
		stringstream convert(str_num); //turns the string into a stream

		//checks for complete conversion to integer and checks for minimum value
		if(convert >> intgr && !(convert >> str_num) && intgr >= min)
		return intgr;

		cin.clear(); //just in case an error occurs with cin (eof(), etc)
		cout << "Input must be >= " << min << ". Please try again.\n";
	}
}

int is_number( string s) {
	for (int i = 0; i < s.size(); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			return 2;
		}
	}
			return 5;
}
//0!
void zerofac(int a, int b) {
	int ans;
	if (a == 0)
	{
		ans = 1;
	}

	if (ans == b)
	{
		cout << " 0! = 1 \n";
	}
	else
		cout << "false\n";
}
//1!
void onefac(int a, int b) {
	int ans;
	if (a == 1)ans = 1;

	if (ans == b)
	{
		cout << " 1! = 1 \n";
	}
	else
		cout << "false\n";
}
//2!
void twofac(int a, int b) {
	int ans;
	if (a == 2)ans = 2 * 1;

	if (ans == b)
	{
		cout << " 2! = 2\n";
	}
	else
		cout << "false\n";
}
//3!
void threefac(int a, int b) {
	int ans;
	if (a == 3)ans = 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 3! = 6\n";
	}
	else
		cout << "false\n";
}

// 5!
void fivefac(int a, int b) {
	int ans;
	if (a == 5)ans = 5 * 4 * 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 5! = 120 \n";
	}
	else
		cout << "false\n";
}


int main()
{
	const int min_num=0;
// function for user's input number
	int nmbr=get_int(min_num,"\nEnter any number 1,2,3, or 5 :  ");
	cout << "\nnmbr : " << nmbr<<endl;

// conditions according to users input
    if (nmbr == 0)
    {
    zerofac(0, 1);
	}

	else if (nmbr == 1)
	{
    onefac(1, 1);
	}

	else if (nmbr ==2)
	{
    twofac(2, 2);
	}

	else if (nmbr ==3)
	{
	threefac(3, 6);
	}

	else if (nmbr==5)
	{
	fivefac(5, 120);
    }

   else

    cout<<"You should have entered number not other than 1,2,3,5"<<endl;
// program ends because user's input was other than 1,2,3 or 5.
	return 0;
}
