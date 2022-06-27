#include <iostream>
#include <iomanip>
using namespace std;
#include "ll.h"
//3
int main(int argc, char **argv){
//Assignment: Linked List 1
  
/*
./main 6412111 Mahidol 6413119 Pornlapat 1 a 2 b 3 c
  */

  LL l;
  int i;
  for(i=1;i<(argc-1);i+=2){ //get input from argv
  l.insert_node(atoi(argv[i]),argv[i+1]);
    }  
  l.print_all();

}//automatically call destructor


/*
#include <iostream>
#include <iomanip>
using namespace std;
#include "node.h"

class LL{
   nodePtr hol; //head of linked list
   int size;
  public:
     LL();
      void insert_node(int x=0,string y="-");
	    void print_all();
     ~LL();
};
LL::LL(){
  hol=NULL;
  size=0;
}

void LL::insert_node(int x,string y){
   nodePtr t=hol;
    //search for location
  if(hol==NULL) hol=new node(x,y);
  else{
   while(t->getnext()) t=t->getnext();
   t->setnext(new node(x,y));
    }
  size++;
}

void LL::print_all (){
   nodePtr t;
  for(t=hol; t; t=t->getnext())
       cout<<setw(12)<<t->getId()<<setw(12)<<t->getName();
  cout<<endl;  
}


LL::~LL(){
  cout<<"deleting all nodes"<<endl;
  nodePtr t;
  t=hol;
  int i;
 for(i=0;i<size;i++){
      hol=hol->getnext();
      delete t;
      t=hol;

  } 

  }*/


/*
#include <iostream>
#include <iomanip>
using namespace std;
class node
{ 
private:
    int id;
//    int value;
    string name;
    node *next;
public:
  node(int x=0, string y = "-");
 ~node();

string getName(){ //getter
  return name;
}

int getId(){
  return id;
}

node* getnext(){ //getter
  return next; 
}

void setnext(node *t){
  next=t;
}

void print(){
  
}

};
typedef node* nodePtr;


node::node(int x, string y){
  id=x;
  name = y;
  next=NULL;
}

node::~node(){
		cout<<id<<setw(12)<<name<<" deleted"<<endl;
}*/