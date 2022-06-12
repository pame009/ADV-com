#include <iostream>
using namespace std;
#include "student.h"

int main(int argc, char **argv) {
  /*  
  std::cout << "Have " << argc << " arguments:" << std::endl;
  
  for (int i = 0; i < argc; ++i) {

    std::cout << argv[i] << std::endl;
    }  
*/

// after make compile  
// ./student jack 20 0 ming 21 100
  student Cst[10], *p; //p not object yet
  //Cst[0].set_name("Rapeepat");
  //Cst[0].print_name();
  int i,a,c;
  string n;
  float s;
  for(c=0,i=1;i<(argc-1);c++,i+=3){
Cst[c].set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    //cout<<"-----------"<<endl;
    }
    
    /*for(c=0,i=0;i<(argc-1)/3;i+=3,c++){
    cout<<"What is your name?";
    cin>>n;
    cout<<"What is your age?";
    cin>>a;
    cout<<"What is your score?";
    cin>>s;
    Cst[i].set_all(n,a,s);
      
    Cst[c].set_all(argv[i],atoi(argv[i+2]),atof(argv[i+3]));
  }
*/
  p=Cst; //Cst[0]
  
  for(c=0,i=1;i<(argc-1);c++,i+=3){
    //Cst[i].print_all();
    (p+c)->print_all();  
    /*
    cout<<"...............?"<<endl;
    (p)->print_all();  
    (p+1)->print_all();  
    (p+2)->print_all();  
*/
  }
  // delete p;      no need to delete because no new

  /*
  p=new student;
  p->set_all("Frank",19,0);
  p->print_all();

  delete p;
*/
  
  /*
  cout<<endl;
  cout<<"Pointer"<<endl;
  p=&Cst[1];
  (*p).print_name(); //need bracket to include star
  p->print_name(); // same
  (p-1)->print_name(); 
  */
  
}