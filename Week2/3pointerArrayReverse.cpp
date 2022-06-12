#define SIZE 10
#include <iostream>
#include <string.h>
using namespace std;

void summary();
void arithmetic();
void test();

int main(void){
  //Main-Pointer-Example
  int *pa, *pb, temp,i;
  int a[SIZE] = {1,2,3,4,5,6,7,8,9,10}; 
  
  pa = &a[0]; //pa = a;
  cout<< "Original: ";
  for (i = 0; i < SIZE - 1; i++,pa++) //1-9
  cout<<*pa<<" ";
  cout<<*pa<<endl; // 10 end
  
  pa = &a[0]; // a[0] start 
  pb = &a[SIZE - 1]; // end  
  cout<<"Reverse: "; 
  for (i = 0; i < SIZE/2; i++) {  // reverse array
    temp = *pa; //temp = 1
    *pa = *pb; // pa = 10
    *pb = temp; // pb = temp = 1
    pa++; pb--;
  }
  
  pa = &a[0]; // print reverse array
  for (i = 0; i < SIZE - 1; i++,pa++)
  cout<<*pa<<" ";
  cout<<*pa<<endl;
  
  return 0;
}

void test(){
  
}