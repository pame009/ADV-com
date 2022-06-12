#include <iostream>
using namespace std;

class monster{
private:
	string name;
	int hp,potion;
public:
	/*void Attack(monster &);
          void heal();*/
	monster(string ="Bob", int =30,int=69420);
  monster(int x){hp=x;}

  ~monster();
bool operator==(monster);
void operator++();
void operator+=(int);
void clear(){hp=0;} //set hp = 0

	/* constructor and destructor */
/*
thanos(int =0,int=100);
~thanos();
*/
};
monster::~monster(){
   cout<<"==========="<<endl;
   cout<<name<<" "<<hp<<" Destroyed"<<endl;
}

monster::monster(string n,int h,int p){
  name=n;
  hp=h;
  potion=p;
  cout<<name<<" "<<hp<<" created"<<endl;
  
}

bool monster::operator==(monster x){
  if(hp==x.hp) return true;
  else return false;
}
void monster::operator++(){
  ++hp;
}
void monster::operator+=(int x){
  hp+=x;
}

