#include <iostream>
using namespace std;
#include "node.h"

 int main() {
  int x=5;
  node a,b,*head,c;

   
  a.value = x;
  a.next=&b;
  b.next=&c;
  head=&a; 
  

   
  b.value=head->value+3;
  cout<<"a="<<a.value<<endl;
  cout<<"b="<<b.value<<endl;
  cout<<"head="<<head->value<<endl;
  
  node *temp;  
  temp=head; //temp=&a;
  cout<<"temp="<<temp->value<<endl;
  cout<<"temp->next="<<temp->next->value<<endl;

  c.value=555;
  
  cout<<"c "<<c.value<<endl;
  cout<<temp->value<<endl;
  cout<<temp->next->value<<endl;
  cout<<temp->next->next->value<<endl;

   


   
   
   
   


   
/*
   temp->next->value
   (a.next)->value
   b.value
     
     */



   
  
   
}