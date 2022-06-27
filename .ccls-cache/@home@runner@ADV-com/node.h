#include <iostream>
#include <iomanip>
using namespace std;
class node
{ 
private:
    int value;
    node *next;
public:
  node(int x=0);
 ~node();

int getvalue(){ //getter
  return value;
}

node* getnext(){ //getter
  return next; 
}

void setnext(node *t){
  next=t;
}

};
typedef node* nodePtr;


node::node(int x){
  value=x;
  next=NULL;
}

node::~node(){
		cout<<value<<" deleted"<<endl;
}