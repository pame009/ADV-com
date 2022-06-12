#include <iostream>
using namespace std;
#include"thanos.h"

int main() {
  int n=6;
  monster *p;
  p=new monster[n];
  thanos a;
  ++a;
  ++a;
  a.snap(p,n);
  ++a;
  ++a;
  a.snap(p,n);
  ++a;
  ++a;
  a.snap(p,n);
  delete []p;
  
}