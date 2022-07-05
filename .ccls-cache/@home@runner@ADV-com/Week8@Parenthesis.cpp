#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace  std;

class NODE{
	 char data;
	NODE *nextPtr;
public:
	NODE(char);
	~NODE();
  char get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(char x){
	data=x;
	nextPtr=NULL;

}
char NODE::get_value(){
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
    bool isEmpty(bool empty);
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
		char value;		
	 if(t)	{
    top=top->get_next();
     value=t->get_value();
	// Left missing for exercises
     delete t;
     size--;
     return value;
     }
		cout<<"Empty stack"<<endl<<endl;
   return 0;
	}

bool Stack::isEmpty(bool empty = false){
  bool Empty = empty;
  if(size == 0){
    return true;
  }
  else return false;
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



/*
./main {[]}[] {[]] {{

There are 3 main cases

1. check if the parenthesis match —> pop the same type?

2. is the stack empty at the end (is there opening without closing)

3. are you trying to pop an empty stack somewhere (close without opening)

*/
using namespace  std;
int main(int argc, char **argv){
  printf("Checking the parentheses in argv arguments\n\n");
  int i,N,j;
  Stack s;
  char t;
  int match;
  for(i=1;i<argc;i++){
   match=1;
     for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses*/
       switch(argv[i][j]){
          case '[': // no need 
          case '{': s.push(argv[i][j]); break;

          case ']': t= s.pop();  //t ='['
            if(t!='[') match=0;  break;
        
              //compare
          case '}': t= s.pop(); 
            if(t!='{') match=0;  break;
              //compare
       }
              
       if(match==0) break;
     }    
   
    if(match==0){
    cout<<"The parentheses do not match\n\n";
    }
    
    else if (!s.isEmpty()){ //check stack is empty
    cout<<"\nNo close brackets\n";      
      }
   /*   
else if (s.pop()){ //pop empty bracket
    cout<<"-------\n";
      }
     */   
    
      else{
        cout<<"The parentheses match\n\n";
        }
  }



   return 0;
}
