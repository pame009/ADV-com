#define SIZE 10
#include <iostream>
#include <string.h>
using namespace std;

void Main_Pointer_Example();

int main(){
  //pointer arithmetic 
  char *cp = new char[9];
  delete []cp;
  cout<<"**************"<<endl<<endl;
  
  Main_Pointer_Example();
  cout<<"**************"<<endl<<endl;
  
}
void Main_Pointer_Example(){
  
 int i,a[10]={1,5,7,8,9,2,9,5,1,3}, *ip,*ip2;
  
  ip=a; // ip=&a[0];

  for(i=0;i<10;i++) {
    cout<<*ip<<endl;
    ip++; //(*ip)++
  }

  cout<<"---------"<<endl;
  cout<<*ip<<endl;
  ip++;
  cout<<*ip<<endl;

  ip2 = new int[10];
  for(i=0;i<10;i++){ //add odd to new
    *ip2=2*i+1;
    ip2++;
  }
  cout<<"..."<<endl;

  ip2-=10;
  for(i=0;i<10;i++){   // print odd
    cout<<ip2[i]<<endl; //*(ip2+1)
  }

  //cout<<*ip2<<endl;
  
  delete [] ip2;
}
