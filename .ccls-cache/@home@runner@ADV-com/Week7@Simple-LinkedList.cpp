#include <iostream>
using namespace std;
#include "node.h"
//1
int main() {
  int x=5,i;
  node a,b,*head;
   
  a.value = x;
  a.next=&b;
  head=&a; 
  
  b.value=head->value+3;
  cout<<"a = "<<a.value<<endl;
  cout<<"b = "<<b.value<<endl;
  cout<<"head = "<<head->value<<endl;
  puts("-----------\n");
  
  node *temp;  
  temp=head; //temp=&a;
  cout<<"temp = "<<temp->value<<endl;
  cout<<"temp->next = "<<temp->next->value<<endl;
  puts("-----------\n");

  node c;
  c.value=555;
  b.next=&c;
  cout<<"c "<<c.value<<endl;
  cout<<temp->value<<endl; //use temp to print everything
  cout<<temp->next->value<<endl;
  cout<<temp->next->next->value<<endl; //need to link everything first
  puts("-----------\n");

  c.next = NULL;
  cout<<"Moving temp"<<endl;
  /*
  cout<<temp->value<<endl;
  temp = temp->next;
  cout<<temp->value<<endl;

  for(i=0;i<3;i++){
  cout<<temp->value<<endl;
  temp=temp->next
  }
*/  
  for(temp=head;temp!=NULL;temp=temp->next){
  cout<<temp->value<<endl;
  }
  puts("-----------\n");

  //node *head,*temp;
  head = new node; //a
  head->value=x;
  head->next=new node; //b
  head->next->next=new node; //c

  temp=head; //temp=&a;
  head->next->value=head->value+3;
  cout<<"a = "<<a.value<<endl;
  cout<<"b = "<<b.value<<endl;
  cout<<"head = "<<head->value<<endl;
  puts("-----------\n");

  for(i=1;i<10;i++){
    temp->next=new node; //10 node
    temp = temp->next;
    temp->value=x+2*i;
    }
  temp->next=NULL;
  for(temp=head;temp!=NULL;temp=temp->next){
  cout<<temp->value<<endl;
  }
  
  for(temp=head;temp!=NULL;temp=head){
    head = head->next;
    cout<<"delete "<<temp->value<<endl;
    delete temp;
  }
  puts("-----------\n");

  
/*
   temp->next->value
   (a.next)->value
   b.value
     
     */


   
}