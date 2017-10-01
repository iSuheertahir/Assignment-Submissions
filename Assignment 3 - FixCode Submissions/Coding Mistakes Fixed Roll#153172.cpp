//JunaidSaeed
//Roll#153172
// 1: Undeclared Variables:
//Including Header Files
#include<iostream>
//Including standard library
using namespace std;
int main()
{
//Initializing X
int x
cin>>x;
cout<<x;
}

//"Huh? Why do I get an error?"
//AS U Didn't initialize x
//-----------------------------------------------------------------------------------


2: Uninitialized variables:
//including header file
#include<iostream>
//including standard library
using namespace std;
int main()
{
int count=40<<endl;
while(count<100)
{
cout<<count;
count++;
}
return 0;
}
//"Why doesn't my program enter the while loop?"
//As u didn't initialize the Count variable
//-----------------------------------------------------------------------------------------------------


//3: Setting a variable to an uninitialized value:
#include <iostream>
using namespace std;
int main()
{
int a, b;
int sum=0;
cout<<"Enter two numbers to add: ";
cin>>a>>b;
sum=a+b;
cout<<"The sum is: "<<sum;
}
//When Run:
//Enter two numbers to add: 1 3
//The sum is: -1393

//"What's wrong with my program?"
//Now it will produce the correct Sum
//-----------------------------------------------------------------------------------------------------------


//4: Using a single equal sign to check equality:
#include<iostream>
using namespace std;
int main()
{
char x='Y';
while(x='Y' || x=='y')
{
//...
cout<<"Continue? (Y/N)";
cin>>x;
}
return 0;
//"Why doesn't my loop ever end?"
//As u used assignment operator instead of the equal sign
//----------------------------------------------------------------------------------------------------------------


//5: Undeclared Functions:
#include<iostream>
using namespace std;
int main()
{
menu();
return 0;
}
void menu()
{
cout<<"MENU";
}
//"Why do I get an error about menu being unknown?"
//as the function was not declared before the main
//----------------------------------------------------------------------------------------------------------------


//6: Extra Semicolons:
#include<iostream>
using namespace std;
int main()
{
for(int x=0; x<100; x++)
cout<<x<<endl;
}
//"Why does it output 100?"
//The semicolon at the end of the for loop produced the result
//---------------------------------------------------------------------------------------------------------------------


//7: Overstepping array boundaries:
#include<iostream>
using namespace std;
int main()
{
int array[10];
//...
for(int x=1; x<=10; x++)
cout<<array[x]<<endl;
}
//"Why doesn't it output the correct values?"
//AS the Arrays index starts with a Zero
//---------------------------------------------------------------------------------------------------------------------


//8: Integer division
#include<iostream>
using namespace std;
int main()
{
//For example:
double half = 1/2;
cout<<half;
float half1= 1.0/2.0;
cout<<half1;
}
//This code sets half to 0 not 0.5! Why? Because 1 and 2 are integer constants.
//as the value 1 and 2 are integer constt
//------------------------------------------------------------------------------------------------------------------------


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
//It will print the rat_Name because of strcpy
//-----------------------------------------------------------------------------------------------------------


//10 Misusing the && and || operators:
#include <iostream>
using namespace std;
int main()
{
int value;
do
{
//...
value=10;
cout<<"HELLO";
}
while(!(value==10) && !(value==20))
}
//"Huh? Even though value is 10 the program loops. Why?"
//We have to use  && operator instead of ||
//-----------------------------------------------------------------------------------------------------------
