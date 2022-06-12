 #include <iomanip>

inline void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;

}

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
/* What else is missing*/
  sorted=0;
  for(i=0;i<n-j;i++){
    if(a[i]<a[i+1]) {
      swap(a[i],a[i+1]);
      sorted=1;
    }
    display(a,n);
   
  }
   if(sorted==0) break;
  cout<<"============"<<endl;
  
 }
  
}
// ./bubble 22 8 14 5 15 2

void selectionSort(int a[], int n){
  int i,j, min, mini;
  min = a[0];
  for(i=1;i<n;i++){
    for(j=i+1;j<n;j++){
    if(min > a[i]) {
      mini=i;
      min=a[i];
      }
    swap(a[0],a[mini]);
    
  } 
  }
  cout<<"minimum is "<<min<<endl;
  cout<<" at index  "<<mini<<endl;
  
}



