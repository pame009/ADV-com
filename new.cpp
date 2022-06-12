#include <iostream> // <stdio.h>
#include <iomanip>

/*
int age = 10;
cout<< "age = "<<age<<endl    printf("age = %d\n", age);
cin<<age;    scanf("%d", &age)

<iomanip>
int x=2,y=3
cout<<setw(10)<<x<<setw(5)<<y    printf("%10d%5d",x,y);

float y=5.2;
cout<<setprecision(2)<<y;
set lenght to 2 
*/
using namespace std;

void square(int&);
double square(double);

int main() {

  int h3=1;
  int m3=57;
  float f=10.5154848;
  int a=5;
  //double b=2.222;
  cout<<fixed<<setprecision(2)<<f<<endl;
  
  cout<<setfill('0')<<setw(5)<<h3<<":";
	cout<<setw(2)<<m3<<endl;

  square(a);
  cout<<"With & = "<<a<<endl;

  square(f);
  cout<<"Without & = "<<f<<endl;

  //square(b);
  //cout<<"Without & = "<<fixed<<setprecision(7)<<b<<endl;
    return 0;

}

void square (int& x){
     x*=x;
}



double square(double x){
    return x*=x;
}

//sorry for joining in your group :P Me too tbh
// No worries. Dont know what goin on lol