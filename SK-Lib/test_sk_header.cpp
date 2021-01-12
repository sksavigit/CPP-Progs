#include<iostream>
#include "sklib_strings.h"

using namespace std;

int main(){
    char str[]  ="Check the function in the header SKlib";
    char str1[] ="ROTOR";

    if(isPalindrome(str1)) cout << str1 << " is a Palindrome.";
    else cout << str1 << " is not a palindrome";
    
    cout << "\nGiven string:\n" << str;
    reverse_string(str);
    cout << "\nReversed string:\n"<<str;
    cout << "\n";
    return 0;
}
