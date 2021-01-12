#include<iostream>
using namespace std;

void printArray(int *a){
    int *e=a;
    int i=0;
    if(e)
      while(*e){ 
        ++e;
        ++i;
      }
    --e;
    
    cout << "i->" << i-sizeof(*a);
}

int main(){
      int a[]={1,2,3,4,5,6,7,8,9,10};
      printArray(a);
}
