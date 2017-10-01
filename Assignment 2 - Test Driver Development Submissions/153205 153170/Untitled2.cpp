  #include <iostream>
  
  #include<cassert>
  
  using namespace std;
  
  int Factorial(int num)
  
  {
  	
 assert(num >= 0);
 
 int factl = 1;
 
 for(int i = 2; i<=num ;i++)
 
 factl= factl*i;
 
 return factl;
 }
 int main()
 {
 const int zerofactorial = 1;
 
 const int onefactorial = 1;
 
 const int twofactorial = 2;
 
 const int threefactorial = 6;
 
 const int fourfactorial = 24;
 
 const int fivefactorial = 120;
 
 int result;
 
 cout << "Testing Factorial with number = " << 0 <<endl;
 
 result = Factorial(0);
 
 cout << "Factorial = " << result << endl;
 
 assert(result == zerofactorial);
 
 cout << "Testing Factorial with number = " << 1 <<endl;
 
 result = Factorial(1);
 
 cout << "Factorial = " << result <<endl;
 
 assert(result == onefactorial);
 
 cout << "Testing Factorial with number = " << 2 <<endl;
 
 result = Factorial(2);
 
 cout << "Factorial = " << result <<endl;
 
 assert(result == twofactorial);
 
 cout << "Testing Factorialwith number = " << 3 <<endl;
 
 result = Factorial(3);
 
 cout << "Factorial = " << result << endl;
 
 assert(result == threefactorial);
 
 cout << "Testing Factorial with number = " << 4 <<endl;
 
 result = Factorial(4);
 
 cout << "Factorial = "<< result <<endl;
 
 assert(result == fourfactorial);
 
  cout << "Testing Factorial with number = " << 5 <<endl;
  
 result = Factorial(6);
 
 cout << "Factorial = " << result << endl;
 
 assert(result == fivefactorial);
 
 return 0;
 }
