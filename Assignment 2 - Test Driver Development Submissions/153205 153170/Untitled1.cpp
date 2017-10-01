#include <iostream>
using namespace std;
 
 void ZeroFactorial()
  { 
  cout << "Factoiral OF Zero ="<< 1 << endl; 
  }
 
  void OneFactorial()
 { 
 cout << "Factoiral of One = " << 1 << endl;
  }
  
 void TwoFactorial()
 { 
 cout << "Factoiral of Two  =" << 2*1 << endl;
  }

 void ThreeFactorial()
{ 
cout << "Factoiral of Three =" << 3*2*1 << endl; 
}

 void FourFactorial()
 {
  cout << "Factoiral of Four =" << 4*3*2*1 << endl;
   }

 void FiveFactorial()
 {
  cout << "Factoiral of Five =" << 5*4*3*2*1 << endl; 
  }


 //*******Stubs****///
 int Factorial(int number)
 {
 //********Output*****//
 
 cout << "Your Number=" <<number <<endl;
 ZeroFactorial();
 TwoFactorial();
 ThreeFactorial();
 FourFactorial();
 FiveFactorial();

}


 int main()
 {
 Factorial(1);
 Factorial(2);
 Factorial(4);

 return 0;
 }
