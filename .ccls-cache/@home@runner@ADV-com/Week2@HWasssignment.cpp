#include <iostream>
using namespace std;
//1. Creating make file
//2. Swap the value in the array using pointers** to help
//3. Take input from argv


int main(int argc, char **argv){
/* int i,N,*a;
			N=argc-1;
 		     a=new int[N];
			for(i=0;i<N;i++) {
			    a[i]=atoi(argv[i]);
		         cout<< "a[" << i << "]=" <<a[i]<<endl;
		}*/

//void main(){
      int n,*p,i;
    cout<<"How many numbers needed? ";
    cin>> n;
	   p=new int[n];

 for(i=0;i<n;i++) {
 		   cin>>*p;//p is the location where p points to
      p++;  
 }
 p-=n; //rewind the p to the starting location
     // Using p within your program 
  for(i=0;i<n;i++) {
 		   cout<<p[i]<<" "; //p is the location where p points to
 //     p++;  
 }
  cout<<endl;


  for(i=n-1;i>=0;i--) {
 		  cout<<p[i]<<" "; //p is the location where p points to
 //     p++;  
 }

 delete [] p;  
}

  
//}

