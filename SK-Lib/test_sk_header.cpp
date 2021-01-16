#include<iostream>
#include "sklib_numbers.h"
#include "sklib_iostream.h"
using namespace std;

int main(){
    char n1[]="12456789992342342342342342342424";
    char n2[]="3434243234234234234234234234234234133412341321432413241324312413243124312431242134213421341324123413431243124312421342340000000000099999999999999999999999999999999";
    cout << "\n Num1:" <<n1;
    cout << "\n Num2:" <<n2;
    cout << "\n Output:";
    int n1Size=sizeof(n1)/sizeof(n1[0]);
    int n2Size=sizeof(n2)/sizeof(n2[0]);

    char res[n1Size>n2Size ? n1Size+1:n2Size+1];
    sum_two_big_numbers(n1,n2,res);
    cout << res;
    cout <<"\n";
    return 0;
}
