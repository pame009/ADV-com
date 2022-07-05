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


class Stack{
private:
	 NodePtr top;
	int size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    int pop();
    void push(int);
};

Stack::Stack(NodePtr t){
  if(t) {
    top=t;
    size=1;
  }
 else{
   top=NULL;
	 size=0;
   }
}
void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
	 	  new_node->set_next(top);
      top=new_node;
     size++;
   }
 else cout<<"No memory left for new nodes"<<endl;
		 // Left missing for exercises…
}
int Stack::pop(){
 	   NodePtr t=top;
		int value;		
	 if(t)	{
    top=top->get_next();
     value=t->get_value();
	// Left missing for exercises
     delete t;
     size--;
     return value;
     }
    
		cout<<"Empty stack"<<endl;
   return 0;
	}
Stack::~Stack(){
   cout<<"Clearing all stacks"<<endl;
  	int i;
  NodePtr t=top;
  for(i=0;i<size;i++){
      t=top;
      top=top->get_next();
      delete t;
           	// Left missing for exercises
  }


}


int main(int argc,char *argv[]) {
Stack s;
  
  s.push(5);  
  s.push(1);
  s.pop();// 1
  s.push(6);
   s.pop();//6+++++++++++++++++++
  cout<<s.pop()<<endl;//5
  s.push(7);
  s.pop();
    s.push(3);

    s.push(2);

    s.push(1);

  }