// 1: Undeclared Variables:
// solve all the questions
//header files is not included.
#include<iostream>
//not use of 
using namespace std;

//main function
int main()
{
	//decalaring variable of type integer
	int x;

	cin>>x;
	
	cout<<x;
	return 0;
}
"Huh? Why do I get an error?"
 Answer:"Because variable 'x' is not decalared here."
 /////////////////////////////////////////////////////
 
 /////////////////////////////////////////////////////
 //2: Uninitialized variables:

//Header File
#include<iostream>
using namespace std;

int main()
{

	int count=0;
	cout<<"Enter the number to print up to 99./n";
	cin>>count;
	while(count<100)
	{
		
		cout<<count<<endl;
		count++;
	}

}
 /////////////////////////////////////////////////////
 
 /////////////////////////////////////////////////////
 //3: Setting a variable to an uninitialized value:

#include<iostream>
using namespace std;

int main()

{
	int a, b;
	int sum;
	cout<<"Enter two numbers to add: ";
	cin>>a>>b;
	sum=a+b;
	cout<<"The sum is: "<<sum;
	//When Run:
	//Enter two numbers to add: 1 3
	//The sum is: -1393
}

//"What's wrong with my program?"
//ANS: Because sum performing its actio
 /////////////////////////////////////////////////////
 
 /////////////////////////////////////////////////////
 //4: Using a single equal sign to check equality:
#include <iostream>
using namespace std;
int main()
{
	char x='Y';
	cin>>x;
	while(x=='Y')
	{
		//...
		cout<<"Continue? (Y/N)";
		cin>>x;
	}

	
}

//"Why doesn't my loop ever end?"
Ans: Because of Using '==' instead of '=' to end loop when 
character other than 'Y' entered." 
 /////////////////////////////////////////////////////
 
 /////////////////////////////////////////////////////
 //5: Undeclared Functions:
#include<iostream>
using namespace std;


void menu()
{
//...
}

int main()
{
menu();
}
//"Why do I get an error about menu being unknown?"
Ans : you have to decleared void function before 
the main function or write void function before the main.

 /////////////////////////////////////////////////////
 
 /////////////////////////////////////////////////////
 //6: Extra Semicolons:
#include<iostream>
using namespace std;

int main()
{
	for(int x=0; x<100; x++)
	
	cout<<x<<endl;

}

//"Why does it output 100?"
remove the semicolon at the end of fo
 
  /////////////////////////////////////////////////////
 
 /////////////////////////////////////////////////////
 //7: Overstepping array boundaries:
#include<iostream>
using namespace std;
int main()
{
	
	int array[10]={0,1,2,3,4,5,6,7,8,9};
	//...
	for(int x=0; x<10; x++)
	cout<<array[x];

}
//"Why doesn't it output the correct values?"
because array is not initialize and array is sae as 1.

 
/////////////////////////////////////////////////////
 
/////////////////////////////////////////////////////
//8: Integer division
#include<iostream>
using namespace std;
int main()
{
	double half = 1/2;
	cout<<half<<endl;
	half = 1.0/2.0;
	cout<<half;
}



//This code sets half to 0 not 0.5! Why? Because 1 and 2 are integer constants.
//Answer:"Because 1 and 2 are integer constants."

/////////////////////////////////////////////////////
 
/////////////////////////////////////////////////////
//9: Variable Name Styles

//Take a look at the below program. Can you see anything wrong?

#include <stdio.h>
#include <string.h>

main()
{
char CatName[20] = "fluffy";
char dogName[20] = "fido";
char rat_Name[20] = "fester";
int Catage = 3;
int dogs_age = 4;
int ratage = 1;
char myPet[20];
int itsAge;

strcpy(myPet,rat_Name);
itsAge = ratage;
printf("My pet is %s\n",myPet);
}

//Besides the obviously bizarre choice of having a pet rat, do you notice anything? 
no 
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//10 Misusing the && and || operators:

#include<iostream>
using namespace std;

int main()
{
	int value;
	do
	{
	//...
	cin>>value;
	}while(!(value==10) && !(value==20));
	return 0;
}
ans use and operator instead of or

