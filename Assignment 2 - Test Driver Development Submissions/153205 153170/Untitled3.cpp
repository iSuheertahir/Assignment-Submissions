 #include <iostream>
  using namespace std;

 int Factorial(int num)
  {
 int factl = 1;
 for(int i = 2; i<=num ;i++)
 factl = factl*i;
 return factl;
 }
 
 
 int main()
 
 {
 	
 int num;
 int result;

 cout << "Enter Your Number : ";
 cin >> num;

 result = Factorial(num);

 cout << "Your Number's Factorial Is = " << result << endl;
 return 0;
 }

