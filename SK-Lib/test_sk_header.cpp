#include<iostream>
#include "sklib_numbers.h"
#include "sklib_iostream.h"
using namespace std;

int main(){
    char n1[]="12345";
    char n2[]="11111";
    cout << "\n Num1:" <<n1;
    cout << "\n Num2:" <<n2;
    cout << "\n Outp:";
    int n1Size=sizeof(n1)/sizeof(n1[0]);
    int n2Size=sizeof(n2)/sizeof(n2[0]);
    char res[n1Size>n2Size ? n1Size:n2Size];
    sum_two_big_numbers(n1,n2,res);
    cout << res;
    cout <<"\n";
    cout <<"\nn1size:"<<n1Size;
    cout<<"\nn2size:"<<n2Size;
    return 0;
}
