//#define N 10
#include <iostream>
using namespace std;
#include "sorting.h"

int main(int argc, char ** argv) {
 // int a[N]={8,2,5,222,3,2,6,7,3,1};
  /* change to get number from argv*/
   int N=argc-1;
 int *a=new int[N];


 
 int i,j,new_number;
 for(i=0;i<N;i++){
   a[i]=atoi(argv[i+1]);
   
 }
  
 //display(a,N);
 //bubbleSort(a,N); 
   //insertion(a,N);

 selectionSort(a,N);
 display(a,N);
}

// new number =2 
