#include <iostream>
using namespace std;

void summary();
void arithmetic();
void test();

int main(){
  int *pt,p[3];
  pt=&p[0];
  cout<<pt<<endl; //p[0]
  pt++;
  cout<<pt<<endl; //p[1]
  
  pt=&p[2];
  cout<<pt<<endl; //p[2]

  pt-=2;
  cout<<pt<<endl; //p[0]
  
  cout<<"**************"<<endl<<endl;
  summary();
  cout<<"**************"<<endl<<endl;
  arithmetic();
  cout<<"**************"<<endl<<endl;
  
  
}

void summary(){
  int *pt,p[3]={1,5,7};
  pt=&p[0];
  
  cout<<*pt+1<<endl; //p[0]+1
  cout<<*(pt+1)<<endl; //p[0+1] = p[1]
  
}

void arithmetic(){
  /*Example Array*/
  int *ip;
  int a[ ] = {31415, 21828};
  ip = a;  // alternative:	ip = &a[0];

  cout<<a<<".."<<endl;			// print xxx270
  cout<<ip<<" ... "<<*ip<<endl<<endl;	
  
  (*ip)++; 
  cout<<a<<" "<<a[0]<<endl; 	//31415 + 1
  cout<<ip<<" "<<*ip<<endl<<endl; 	//31416
  
  ip++; 
  cout<<a<<endl;			// print xxx270
  cout<<ip<<" "<<*ip<<endl; 	// print xxx274, 21828
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */
  
  }

void test(){
  
}