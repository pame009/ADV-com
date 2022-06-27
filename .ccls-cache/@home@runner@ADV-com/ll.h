#include <iostream>
#include <iomanip>
using namespace std;
#include "node.h"

class LL{
   nodePtr hol; //head of linked list
   int size;
  public:
     LL();
      void insert_node(int);
	    void print_all();
     ~LL();
};
LL::LL(){
  hol=NULL;
  size=0;
}
//ll.insert_node(3);
//ll.insert_node(5);
//ll.insert_node(6);
void LL::insert_node(int x){
   nodePtr t=hol;
    //search for location
  if(hol==NULL) hol=new node(x);
  else{
   while(t->getnext()) t=t->getnext();
   t->setnext(new node(x));
    }
  size++;
}

void LL::print_all (){
   nodePtr t;
  for(t=hol; t; t=t->getnext())
       cout<<setw(5)<<t->getvalue();
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

  }