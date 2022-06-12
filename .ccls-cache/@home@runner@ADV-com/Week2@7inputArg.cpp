//Main_Pointer_Example_19
#define SIZE 10
#include <iostream>
#include <string.h>
using namespace std;
//Main-Pointer-Example-19
int main(int argc,char  **argv){
 /* char c[3][11]={ "mahidol", "university","MUIC"};
//1. What is c[1]==>*(c+1)= university
//3. What is *c==>c[0] =mahidol   

//2. What is c[2][3]= C
//3 what is *(c+2)  ==> c[2] 
  // 4. What is (*(*(c+2)+1) ==> c[2][1] ==> U

  //5 What is (*(*(c+1)+2)?==> c[1][2] ==>i 

 cout<<*(*(c+2)+1)<<endl; 
 cout<<*(*(c+1)+2)<<endl;*/
 int i;
 cout<<"My number of arguments input is "<<argc<<endl;
  
 for(i=0;i<argc;i++){
   cout<<"My argument "<<i <<" is "<< *(argv+i)<<endl; 
                                     //argv[i]
 }



int N,*a; //char **argv 
N=argc-1; // minus (the first program name)
 a=new int[N];
        for(i=0;i<N;i++) {
                a[i]=atoi(argv[i+1]);
                 cout<< "a[" << i <<"]=" <<a[i]<<endl;
        }
   delete[] a;
  return 0;
}
