#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include <iostream>

class NODE{
	 int order,qty;
	NODE *nextPtr;
public:
	NODE(int,int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int x,int y){
  order=x;
  qty=y;
	nextPtr=NULL;
}

int NODE::get_value(){
	 int price;
   cout<<"\nOrder "<<order<<" pay ";
  switch(order){
    case 1: 
    cout<<"Ramen";
    price=100*qty;
    break;

    case 2:
    cout<<"Som Tum";
    price=20*qty;
    break;

    case 3:
    cout<<"Fried chicken";
    price=50*qty;
    break;

    default: 
    cout<<"No food available"<<endl;
    price=0;
    }
  
    cout<<" price "<<price<<" qty "<<qty<<endl;
  return price;
}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 cout<<"\ndeleting order " <<order<<endl;

}


/* MODIFY THIS*/
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
   void enqueue(int,int);
   int dequeue();
   Queue();
   ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
  /*basically dequeue all*/
  int i;
  cout<<"\nThere are "<<size<<" ppl left in the queue\n";
  cout<<"dequeue all\n";
  for(i=0;i<size;i++) dequeue();
}

void Queue::enqueue(int x,int y){
  NodePtr new_node= new NODE(x,y);
if(new_node){ 
    /* Add head and tail for me please */

  /* 1. connect & Change tail
  2. (may be) change head  when the queue is empty
*/
  if(!headPtr) headPtr=new_node; //if no node
   else tailPtr->set_next(new_node); //set next tail
   tailPtr=new_node; //always change
  
  /*3. increase size*/
	 size++;
  cout<<"\nenquque order "<<x<<" quantity "<< y<<endl;
 }
}

int Queue::dequeue(){
  if(headPtr!=NULL){
     NodePtr t=headPtr;
     int price= t->get_value();
    //1. move head away --> to the next one****** 
    headPtr=headPtr->get_next(); //t->get_next();
    //2. Only for the last node -->change tail
    if(size==1) /* headPtr==NULL or  !headPtr*/
        tailPtr=NULL;
     /* Add head and tail for me please */
      size--;    
     delete t;
     return price;
  }
  cout<<"The queue is empty ";
  return -1;
}


int main(int argc , char **argv) {
  Queue Q;
  int i,price;
   /*
./main 1 2 3 2 x 3 2 x
*/
  
for(i=1;i<argc;i++){  
  if(strcmp(argv[i],"x")==0){
    price=Q.dequeue(); //  take out the price of the food
    cout<<"\nYou have to pay "<< price <<endl;  
    int cash;
    do{
      cout<<"Cash: ";
      cin>>cash;
     
      }while(cash<price);
      cout<<"Thank you \n";
      cout<<"dequeing "<< price <<endl;  
    }
    else {
      Q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
       //enqueue both order number an d number of portion
      i++;
      }
}
return 0;
}
/* 1. Change node --> order, quantity of order 
   2. enqueue (each node has 2 values)
  3. dequeue  
       - confirm order
       - calculate price

4.      *** you can do in main** -take money & give change
5.       destructor --> how many ppl left & clear the queue

 */


