#include <iostream> 
using namespace std;

// defult argument
//function prototypes that specifies default argument
 int BoxVolume( int =1, int =2, int =3) ;


int main(){

/*
function OVERLOAD

same function different type
int square(&int);
double square(double);

same function different number of data
int maximum(int,int,int);
int maximum(int,int);
void maximum(int,int); not allowed

*/

  cout<<"The default volume is "<<BoxVolume()<<endl;
  cout<<"\n\nThe  volume a box with lenth 10 is "<<BoxVolume(10)<<endl;
  cout<<"\n\nThe  volume a box with lenth 10 and widht 5 is "<<BoxVolume(10,5)<<endl;
  cout<<"\n\nThe  volume a box with lenth 10 and widht 5 and height 2 is "<<BoxVolume(10,5,2)<<endl;

  return 0;
}

 int BoxVolume( int length, int width, int height) {

       return length*width* height;

}