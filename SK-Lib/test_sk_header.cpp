#include<iostream>
#include "sklib_strings.h"
#include "sklib_numbers.h"

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
    
    int arrList[]={1,2,3,49,0,8,99,222,0,222,0,99999};
    int arrSize=sizeof(arrList)/sizeof(arrList[0]);
    cout << "\narrSize->" << arrSize;
    cout << "\nGiven list:\n" ;
    cout << "\nBiggest number of the given array is:";
    cout << find_the_biggest_of_the_array(arrList,arrSize);
    cout << "\n";

    return 0;
}
