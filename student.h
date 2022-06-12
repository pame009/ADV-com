#ifndef student_h
#define student_h

#include <iostream>
using namespace std;

/* In the C Programming Language, the #ifndef directive allows for conditional compilation. The preprocessor determines if the provided macro does not exist before including the subsequent code in the compilation process.
ref:https://www.techonthenet.com/c_language/directives/ifndef.php
*/

class student{
private: 

string name;
int age;    
float score;

   public:  
void set_name(string);
void set_age(int);
void print_name();
int get_age();
void set_float(float s){s>100?score=100:score=s;}
float get_float(){return score;}
void print_all();
void set_all(string,int,float);
};


void student::print_name(){
 		cout<<"Name:"<<name<<endl;
}
void student::set_name(string n){ name=n;}

void student::set_age(int a){age = a;}

int student::get_age(){
  return age;
}

void student::print_all(){
    print_name();
 		cout<<"age:"<<age<<"score"<<score<<endl;
}

void student::set_all(string n, int a, float s){
    set_age(a);
    set_name(n);
    set_float(s);
}

#endif
