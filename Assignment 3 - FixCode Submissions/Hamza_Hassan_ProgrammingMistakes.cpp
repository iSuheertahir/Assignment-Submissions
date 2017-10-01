1: Undeclared Variables:

int main()
{
cin>>x;
cout<<x;
}

Question: "Huh? Why do I get an error?"

Answer: "You have to declared variable DataType"

Example: int main()
         {
         	int x;          // Declaring Variable 'x'
         	cin >> x;
         	cout << x;
		 }
 
//*----------------------------------------------------------------------------*//


2: Uninitialized variables:

int count;
while(count<100)
{
cout<<count;
}

Question: "Why doesn't my program enter the while loop?"

Answer: "You have to initialize the variable with some value"

Example: int main()
         {
         	int count = 1;        // initializing the variable by value '1' 
            while(count<100)
            {
               cout<<count;
            }
		 }
 
//*----------------------------------------------------------------------------*//


3: Setting a variable to an uninitialized value:

int a, b;
int sum=a+b;
cout<<"Enter two numbers to add: ";
cin>>b;
cout<<"The sum is: "<<sum;
When Run:
Enter two numbers to add: 1 3
The sum is: -1393

Question: "What's wrong with my program?"

Answer: "You have to set a variable to an initialized value"

Example: int main()
         {
         	int a, b, sum;
         	cout << "Enter two numbers to add: ";
         	cin >> a;                      // intialize some value to variable 'a'
         	cin >> b;                      // intialize some value to variable 'b'
         	sum = a + b;
         	cout << "The sum is: " << sum;
		 }
 
//*----------------------------------------------------------------------------*//


4: Using a single equal sign to check equality:

char x='Y';
while(x='Y')
{
cout<<"Continue? (Y/N)";
cin>>x;
}

Question: "Why doesn't my loop ever end?"

Answer: "You have to use this sign '==' instead of this '=' to check equality"

Example: int main()
         {
         	char x = 'Y';
            while(x == 'Y')           // is variable 'x' is equal to 'Y' 
            {
               cout << "Continue? (Y/N)";
               cin >> x;
            }
		 }
 
//*----------------------------------------------------------------------------*//
 

5: Undeclared Functions:

int main()
{
menu();
}
void menu()
{
//...
}

Question: "Why do I get an error about menu being unknown?"

Answer: "You have to define the Function first before calling it or you can also use function prototype in case of after declaration"

Example: void menu();        // function prototype
         int main()
         {
         	menu();
		 }
		 void menu()
         {
             cout << "Hello World";
         }
         
           "OR"
         
Example: void menu()        // function declaration
         {
             cout << "Hello World";
         } 
         int main()
         {
         	menu();
		 }
		 
//*----------------------------------------------------------------------------*//


6: Extra Semicolons:

for(int x=0; x<100; x++);
cout<<x;

Question: "Why does it output 100?"

Answer: "You have to remove the last semicolon just after the closing bracket"

Example: int main()
         {
         	for(int x=0; x<100; x++)
         	{
         	    cout << x;	
			}
		 }
 
//*----------------------------------------------------------------------------*//
 

7: Overstepping array boundaries:

int array[10];
//...
for(int x=1; x<=10; x++)
cout<<array[x];

Question: "Why doesn't it output the correct values?"

Answer: "You have to initialize the values in array of limited size (the size that you declared)"

Example: int main()
         {
         	int array[10] = {1,2,3,4,5,6,7,8,9,0};
            for(int x=0; x<10; x++)
            {
            	cout << array[x];
			}        
		 }
 
//*----------------------------------------------------------------------------*//


8: Integer division

For example:
double half = 1/2;

Question: "This code sets half to 0 not 0.5! Why?"

Answer: "You have to set 1 and 2 as double"

Example: int main()
         {
         	double half = 1.0/2.0;    
		 }
 
//*----------------------------------------------------------------------------*//


9: Variable Name Styles

Take a look at the below program. Can you see anything wrong?

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

Question: "Besides the obviously bizarre choice of having a pet rat, do you notice anything?"

Answer: "No"  

//*----------------------------------------------------------------------------*//


10: Misusing the && and || operators:

int value;
do
{
//...
value=10;
}while(!(value==10) || !(value==20))

Question: "Huh? Even though value is 10 the program loops. Why?"

Answer: "You have to use AND opearator '&&' instead of OR operator '||'"

Example: int main()
         {
         	int value;
            do
            {
               value=10;
            }while(!(value==10) && !(value==20))    
		 }
 
//*----------------------------------------------------------------------------*//

