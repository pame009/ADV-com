#include <iostream>
using namespace std;

void ex1();
void ex5();
void summary2();

int main(){
  
  float *b = new float;  //create b, new float
  cout<<"value of new float:";
  cin>>*b; // new = value
  cout<<*b<<" "<<b<<" "<<&b<<endl; // value of new, address of new, address of b
  
//force mem to create new, not delete after scope because no variable name, need to delete
  delete b; //delete new for mem to go back system
  
  cout<<"**************"<<endl<<endl;
  summary2();
  cout<<"**************"<<endl<<endl;
  ex1();
  cout<<"**************"<<endl<<endl;
  ex5();
}
void summary2(){
  int *pa,b=5;
  pa= new int;
  *pa =2;
  //cout<<"adress of a is "<< &a  <<". The value of a is"<< a<<endl;  no this line because no a
  cout<<"adress of pa is "<< &pa  <<endl;
  cout<<"The value of pa is "<< pa <<endl;
  cout<<"The value of *pa is "<<*pa<<endl;

  cout<<*&pa<<" " << &*pa<<endl;
  delete pa;
  
  pa=&b;
  cout<<"adress of pa is "<< &pa  <<endl;
  cout<<"The value of pa is "<< pa <<endl;
  cout<<"The value of *pa is "<<*pa<<endl;
}

void ex1(){
  int *p;
  p= new int;
  *p = 5;
  // x no longer used
  cout/*<<x<<" "*/<<*p<<endl; 
  cout/*<<&x<<" "*/<<p<<endl;
  cout<<&p<<endl;
  delete p;
  }

void ex5(){
  float *a = new float;
  *a = 100; 
  cout<<a<< " "<< *a<<endl;
  (*a)++;
  cout<<a<< " "<< *a<<endl;
  (*a) = 201;
  cout<<a<< " "<< *a<<endl<<endl;
  //b++; invalid
  /*bad exaple
  a = new float;
  *a = 2.1;
  delete a;
  have 2 new but delete only 2.1 not 201
  */

  //inprove 
  float *p = a;
  a = new float;
  cout<<p<< " "<< *p<<endl; // old a point to p
  cout<<a<< " "<< *a<<endl; // new a
  delete a;
  delete p;
}
