#include<iostream>
#include "sklib_iostream.h"
using namespace std;

int main(){
      int a[]={0,1,2,3,4,5,6,7,8,9,10,22,22,234,23,2,2,24,3};
      printArray(a,sizeof(a)/sizeof(a[0]));

      char str[]="Check this out";

      printArray(str,sizeof(str)/sizeof(str[0]));
      
      double f[]={0,5.0,3.9,90.99,4.5,9.9,10.0};

      printArray(f,sizeof(f)/sizeof(f[0]));

      string s[]={"check","this","out"};

      printArray(s,3);

}
