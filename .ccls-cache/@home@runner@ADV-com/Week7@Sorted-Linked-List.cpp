// Fig. 12.3: fig12_03.c
// Inserting and deleting nodes in a list
#include <iostream>
#include <iomanip>

using namespace std;
//3

// self-referential structure    
class Node
{ 
private:
    int value;
    Node *nextPtr,*pPtr ;
public:
  Node(int x=0);
 ~Node();
  Node* get_next();
  Node* get_prev();
  void set_next(Node* t);
  void set_prev(Node* t);
  void print();
  int  get_data(){return value;}
};
            
typedef Node *NodePtr; // synonym for Node*


Node::Node(int x){
  value=x;
  nextPtr=NULL;
  pPtr=NULL;
}

Node::~Node(){
		cout<<value<<" deleted"<<endl;
}

NodePtr Node::get_next(){
    return nextPtr;
}

NodePtr Node::get_prev(){
    return pPtr;
}

void Node::set_next(NodePtr t){
    nextPtr=t; 
}

void Node::set_prev(NodePtr t){
    pPtr=t; 
}

void Node::print(){ 
    cout<<setw(3)<<value; 
}


class LL{
   NodePtr hol; //head of linked list
   int size;
  public:
     LL();
     
	  int deletes( int value );
    int isEmpty( );
    void insert(int value );
    void printList( );
    void printListR( );
     ~LL();
};

LL::LL(){
  hol=NULL;
  size=0;
}


LL::~LL(){
  cout<<"deleting all nodes"<<endl;
  NodePtr t;
  t=hol;
  int i;
 for(i=0;i<size;i++){
      hol=hol->get_next();
      delete t;
      t=hol;
  } 
  
}


// insert a new value into the list in sorted order
void LL::insert( int value )
{ 
   NodePtr newPtr; // pointer to new node
   NodePtr previousPtr; // pointer to previous node in list
   NodePtr currentPtr; // pointer to current node in list

   newPtr =new Node(value); // create node & put value in

   if ( newPtr != NULL ) { // is space available
     
      previousPtr = NULL;
      currentPtr = hol;
      // loop to find the correct location in the list       
      while ( currentPtr != NULL && value > currentPtr->get_data() ) {
         previousPtr = currentPtr; // walk to ...               
         currentPtr = currentPtr->get_next(); // ... next node 
      } // end while                                         

      // insert new node at beginning of list
      if ( previousPtr == NULL ) { 
         newPtr->set_next(hol);
         hol = newPtr;
        if(currentPtr) //first node insert
          currentPtr->set_prev(newPtr);
      } // end if
      else { // insert new node between previousPtr and currentPtr
         previousPtr->set_next(newPtr);
         newPtr->set_next(currentPtr);

        if(currentPtr) //insert last node
          currentPtr->set_prev(newPtr);
        newPtr->set_prev(previousPtr);
      } // end else
     ++size;
   } // end if
   else {
      cout<<value <<" not inserted. No memory available."<<endl;
   } // end else
} // end function insert


// delete a list element
int LL::deletes(  int value )
{ 
   NodePtr previousPtr; // pointer to previous node in list
   NodePtr currentPtr; // pointer to current node in list
   NodePtr tempPtr; // temporary node pointer

   // delete first node
   if ( value == hol->get_data() ) { 
      tempPtr = hol; // hold onto node being removed
      hol = hol->get_next(); // de-thread the node
      size--;  
      delete tempPtr; // free the de-threaded node

     if(hol) hol->set_prev(NULL);
      return value;
   } // end if
   else { 
      previousPtr = hol;
      currentPtr = hol->get_next();

      // loop to find the correct location in the list
      while ( currentPtr != NULL && currentPtr->get_data() != value ) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->get_next(); // ... next node  
      } // end while

      // delete node at currentPtr
      if ( currentPtr != NULL ) { 
         tempPtr = currentPtr;
         previousPtr->set_next(currentPtr->get_next());
        currentPtr=currentPtr->get_next();
        if(currentPtr) currentPtr->set_prev(previousPtr); 
         delete tempPtr ;
         size--;
         return value;
      } // end if
   } // end else

   return '\0';
} // end function delete

// return 1 if the list is empty, 0 otherwise
int LL::isEmpty(  )
{ 
   return hol == NULL;
} // end function isEmpty


// print the list
void LL::printList( )
{ 
  NodePtr currentPtr=hol;
   // if list is empty
   if ( size==0) {
      cout<< "List is empty."<<endl;
   } // end if
   else { 
       cout<< "The list is:" <<endl;

      // while not the end of the list
      //while ( currentPtr != NULL ) { 
     int i;
     for(i=0;i<size;i++){
          currentPtr->print() ;
            cout<<"  ->";
         currentPtr = currentPtr->get_next();   
      } // end while

      puts( "NULL\n" );
   } // end else
} // end function printList


void LL::printListR( )
{
 // if list is empty
 if ( isEmpty() ) {
cout<<"List is empty"<<endl;
// end if
} 
  else{
    int i;
    NodePtr currentPtr=hol;
    
    for(i=0;i<size-1;i++){ //1. find last node
      currentPtr=currentPtr->get_next();
    }
    
    for(i=0;i<size;i++){ //2. from last node print each node
      currentPtr->print();
      cout<<"  ->";
      currentPtr=currentPtr->get_prev(); 
      //3. move to prev node
      }

     }// end else
      puts( "NULL\n" );
} // end function printList



void instructions( void );

int main( void )
{ 
   LL l; // initially there are no nodes
   unsigned int choice; // user's choice
   int item; // char entered by user

   instructions(); // display the menu
   cout<< "? " ;
   cin>> choice ;

   // loop while user does not choose 3
   while ( choice != 3 ) { 

      switch ( choice ) { 
         case 1:
            cout<<"Enter a number: " ;
            cin>> item ;
            l.insert( item ); // insert item in list
            l.printList();//print the list out
            l.printListR();//print the list out
            break;
         case 2: // delete an element
            // if list is not empty
            if ( !l.isEmpty(  ) ) { 
               cout<< "Enter number to be deleted: " ;
               cin>>item ;

               // if character is found, remove it
               if ( item==l.deletes( item ) ) { // remove item
                // cout<<item << " deleted.\n";
                  l.printList( );
                  l.printListR( );
               } // end if
               else {
                  cout<<item<<" not found.\n\n";
               } // end else
            } // end if
            else {
               cout<<"List is empty."<<endl;
            } // end else

            break;
         default: 
           cout<< "Invalid choice." <<endl;
            instructions();
            break;
      } // end switch

      cout<< "? " ;
     cin>>choice ;
   } // end while

   puts( "End of run." );
} // end main




// display program instructions to user
void instructions( void )
{ 
   cout<< "Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end."<<endl ;
} // end function instructions
