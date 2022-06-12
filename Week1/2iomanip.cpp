#include <iostream> // <stdio.h>
#include <iomanip>
using namespace std;

int main(){

int age = 10;
cout<<"age = "<<age<<endl;    //printf("age = %d\n", age);
cin>>age;  //scanf("%d", &age)

//<iomanip>
int x=2,y=3;
cout<<setw(10)<<x<<setw(5)<<y<<endl;    //printf("%10d%5d",x,y);

float z=5.2;
cout<<setprecision(2)<<z<<endl;
//set lenght to 2 

cout<<setfill('0')<<setw(5)<<z;

  
  return 0;
}