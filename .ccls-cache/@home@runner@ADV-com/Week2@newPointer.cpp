#include <iostream> // <stdio.h>
#include <iomanip>
using namespace std;

void square(int&);
double square(double);

int main() {

  int h3=1;
  int m3=57;
  float f=10.5154848;
  int a=5;
  double b=2.222;

  cout<<fixed<<setprecision(2)<<f<<endl;
  cout<<setfill('0')<<setw(5)<<h3<<":";
	cout<<setw(2)<<m3<<endl;

  square(a); // pass by reference
  cout<<"With & = "<<a<<endl;

  square(f); // pass by value
  cout<<"Without & = "<<f<<endl;
// without & mean call square but return value not change anything
  
  f = square(f);
  cout<<"Without & = "<<f<<endl;
// set return valur to f
  
  square(b);
  //cout<<"Without & = "<<fixed<<setprecision(7)<<b<<endl;
    return 0;

}

void square (int& x){
     x*=x;
}

double square(double x){
    return x*=x;
}
