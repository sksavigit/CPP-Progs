#include<iostream>
#include "sklib_strings.h"

using namespace std;

int main(){
    char str[]="Check the function in the header SKlib";
    reverse_string(str);
    cout << str;

    return 0;
}
