#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#ifndef treenode_h
#define  treenode_h
// An integer binary search tree

class TreeNode{
TreeNode *leftPtr;
TreeNode *rightPtr;
int data;

public:
TreeNode(int x){
  data=x;
  leftPtr=NULL;
  rightPtr=NULL;
}
~TreeNode(){
  cout<<"Deleting "<<data<<endl;
}
void set_left(TreeNode* t){leftPtr=t;}
void set_right(TreeNode* t){rightPtr=t;}
TreeNode* move_left(){return leftPtr;}
TreeNode* move_right(){return rightPtr;}
int get_value(){return data;}
};// end structure treeNode 

typedef TreeNode* TreeNodePtr; 
// synonym for TreeNode*
#endif



class BST{
int size;
TreeNodePtr rootPtr; //create Treenode rootnode
void inOrder(TreeNodePtr);
void preOrder(TreeNodePtr);
void postOrder(TreeNodePtr);
void treeOrder(TreeNodePtr,int);
void clear_node(TreeNodePtr);

public:

BST(){
  size=0;
  rootPtr=NULL;
}

~BST(){clear_node(rootPtr);}

void insert_node(int x){
  cout<<"inserting "<<x<<endl;
  TreeNodePtr new_node = new TreeNode(x);//new_node = x
  if(new_node){ //new node!=NULL
    if(!rootPtr){ //root==NULL
      rootPtr=new_node;
    }
    else{
      int inserted=0; //successful=1
      TreeNodePtr t = rootPtr; //create t = root
      while(!inserted) {//loop insert==0
        if(t->get_value()>=x){//x<=root
          /* get to the left*/
          if(t->move_left()==NULL){
            t->set_left(new_node);
            inserted=1;
          } else t=t->move_left(); //move left != NULL
          } //end if
          else{
            /* get to the right*/
            if(t->move_right()==NULL){
              t->set_right(new_node);
              inserted=1;
            } else t=t->move_right();
            }//end else
      }//end while
      size++;
      }//end else
    }//end if
  }

void print_all(int option = 4){
  switch(option){
   case 0: inOrder(rootPtr); cout<<endl; break;
   case 1: preOrder(rootPtr);cout<<endl;break;
   case 2: postOrder(rootPtr);cout<<endl;break;
   default: inOrder(rootPtr);cout<<endl;
            preOrder(rootPtr);cout<<endl;
            postOrder(rootPtr);cout<<endl;
            treeOrder(rootPtr,0);cout<<endl;  
    }
}

};//end BST

void BST::inOrder(TreeNodePtr treePtr){ 
  if(treePtr){
  // if tree is not empty, then traverse
  inOrder( treePtr->move_left() ); //Recursion to the left
  cout<<setw(3)<<treePtr->get_value();  //print the value 
   
  inOrder( treePtr->move_right()); //Recursion to the right
    } // end if                          
} // end function inOrder

void BST::preOrder(TreeNodePtr treePtr){ 
  if(treePtr){
    cout<<setw(3)<<treePtr->get_value();  //print the value 
    preOrder(treePtr->move_left());
    preOrder(treePtr->move_right());
    } // end if                          
} // end function preOrder

void BST::postOrder(TreeNodePtr treePtr){ 
  if(treePtr){
    postOrder(treePtr->move_left());
    postOrder(treePtr->move_right());
    cout<<setw(3)<<treePtr->get_value();  //print the value 
    } // end if                          
} // end function postOrder

void BST::treeOrder(TreeNodePtr treePtr,int x){
  if(treePtr){
    treeOrder(treePtr->move_right(),x+=1);
    for(int i=0;i<x;i++) cout<<"    ";
    cout<<treePtr->get_value()<<endl;  //print the value 
    //for(int i=0;i<x;i++) cout<<"    ";
    treeOrder(treePtr->move_left(),x);
    } // end if      
} // end function treeOrder

void BST::clear_node(TreeNodePtr treePtr){
  if(treePtr){
    // if tree is not empty, then traverse
    clear_node( treePtr->move_left() ); 
    clear_node( treePtr->move_right());   
    delete(treePtr);  //print the value 
    } // end if           
}

/*
./main 5 1 8 2 7 4 6
*/
int main(int argc,char *argv[]) {
  BST b;
  for(int i=1;i<(argc);i++){ //get input from argv
    b.insert_node(atoi(argv[i]));
    }
  b.print_all();
  /*
   b.insert_node(5);
   b.insert_node(1);
   b.insert_node(8);
   b.insert_node(2);
   b.insert_node(7);
   b.insert_node(4);
   b.insert_node(6);
   b.print_all();
*/
  }