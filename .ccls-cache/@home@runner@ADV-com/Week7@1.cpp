#include <iostream>
using namespace std;
#include "node.h"

 int main() {
   
   int x=5,i;
   node *head, *temp;
   head = new node;
   temp = head;
   temp->value=x;

   for(i=1;i<10;i++){
     temp->next=new node;
     temp=temp->next;
     temp->value=x+2*i;
   }

   temp->next=NULL;

   for(temp=head;temp!=NULL;temp=temp->next){
     cout<<temp->value<<endl;
   }
   
   for(temp=head;temp!=NULL;temp=head){
     head=head->next;
     cout<<"Delete temp "<<temp->value<<endl;
     delete temp;
     
   }


   
   
   
   


   
/*
   temp->next->value
   (a.next)->value
   b.value
     
     */



   
  
   
}