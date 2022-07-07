#include <iostream>
using namespace std;

class NODE{
	 int data;
	NODE *nextPtr;
public:
	NODE(int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int x){
	data=x;
	nextPtr=NULL;

}
int NODE::get_value(){
	return data;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 cout<<"deleting " <<data<<endl;

}


class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
   void enqueue(int);
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
  for(i=0;i<size;i++) dequeue();
}


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
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
  cout<<"enquque "<<x<<endl;
 }
}
int Queue::dequeue(){
  if(headPtr!=NULL){ //if not empty
     NodePtr t=headPtr;
     int value= t->get_value();
    //1. move head away --> to the next one****** 
    headPtr=headPtr->get_next(); //t->get_next();
    //2. Only for the last node -->change tail
    if(size==1) /* headPtr==NULL or  !headPtr*/
        tailPtr=NULL;
     /* Add head and tail for me please */
      size--;    
     delete t;
     return value;
  }
  cout<<"The queue is empty ";
  return -1;
}




int main(int argc,char *argv[]) {
Queue q;
  
  q.enqueue(5);  
  q.enqueue(1);
  q.dequeue();
  q.enqueue(7);
  q.dequeue();
  
  q.enqueue(6);
  q.dequeue();//6+++++++++++++++++++
  q.dequeue();
  
   q.enqueue(89);
   q.enqueue(9);
   q.enqueue(99);
   q.enqueue(10);
  cout<<"End of program"<<endl;

  }

/* 1. Change node --> order, quantity of order 
   2. enqueue (each node has 2 values)
  3. dequeue  
       - confirm order
       - calculate price

4.      *** you can do in main** -take money & give change
5.       destructor --> how many ppl left & clear the queue

 */



