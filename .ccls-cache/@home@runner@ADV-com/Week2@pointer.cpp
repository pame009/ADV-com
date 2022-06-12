#include <iostream>
using namespace std;

void ex4();
void test();
void summary();

int main(){
  
  int a;
  double d;
  
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl;
  cout<<"------------"<<endl<<endl;
  
    int x,*p,b;
    p=&x;
    x=5,b=9;
    cout<< x  <<" "<< *p <<endl<<endl; //value of x = *p

  
    cout<< &x <<" "<<  p <<endl; //address x = value p
    cout<< &p <<endl; // address p
  cout<<"------------"<<endl<<endl;

  cout<<x<<" "<<b<<" "<<*p<<endl; // x=5,b=9,p=x=5
  x++; 
  cout<<x<<" "<<b<<" "<<*p<<endl; // x=6,b=9,p=x=6
  cout<<"------------"<<endl<<endl;
  
  p=&b;
  *p=2; // change b = 2
  cout<<x<<" "<<b<<" "<<*p<<endl; // x=6,b=2,p=b=2
  
  cout<<"**************"<<endl<<endl;
  ex4();
  cout<<"**************"<<endl<<endl;
  test();
  cout<<"**************"<<endl<<endl;
  summary();
  
}

void ex4(){
  float *b,x=9.5,y=2.1;
  b=&x;

  cout<<*b<<" "<<x<<" "<<y<<endl; //b=y=2.1,x=9.5,y=2.1
  *b=y;
  y++;
  cout<<*b<<" "<<x<<" "<<y<<endl; //change value *b, x=*b=y=2.1, y=3.1
  b=&y;
  y++;
  cout<<*b<<" "<<x<<" "<<y<<endl; //b point to y, b=y=4.1, x=2.1, y=4.1
  }

void test(){
  int *pa,a=123,b=456,c=789;
  pa =&a;

  cout<<*pa<<endl;
  b=*pa;
  *pa=c;
  cout<<a<<" "<<b<<" "<<c<<endl; // a=*pa=c=789, b=*pa=a=123, c = 789

  // &a=pa;  invalid
}

void summary(){
  int *pa, a=2,b=5;
  pa=&a;
  cout<<"adress of a is "<< &a  <<". The value of a is"<< a<<endl;
  cout<<"adress of pa is "<< &pa  <<". The value of pa is"<< pa <<endl;
  cout<<"The value of *pa is"<<*pa<<endl;

  cout<<*&pa<<" " << &*pa<<endl;
  pa=&b;
  cout<<"adress of pa is "<< &pa  <<". The value of pa is"<< pa <<endl;
  cout<<"The value of *pa is "<<*pa<<endl;
}