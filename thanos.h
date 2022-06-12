#include <iostream>
using namespace std;

#include "monster.h"
class thanos{
private:
	int hp,stone;
public:
	/* constructor and destructor */
thanos(int =0,int=100);
~thanos();

void snap(monster[],int);
void operator++();
};

thanos::thanos(int a, int b){
  hp=b;
  stone=a;
}
//  ~
thanos::~thanos(){
  cout<<"thanos destructor"<<endl;
}

void thanos::operator++(){
  stone++;
}

void thanos::snap(monster m[],int n){
  int i; 
  if(stone==6){
    for(i=0;i<n;i+=2){
      m[i].clear();

      }
  cout<<"Half of the monster is gone"<<endl;
  }
  else{
    cout<<"Not enough stones"<<endl;
  }
}