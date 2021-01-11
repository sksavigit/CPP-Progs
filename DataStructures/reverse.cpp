#include<iostream>
using namespace std;

void reverse_str(char *str){
      char *end = str;

      if(str){
          while(*end) ++end;
      }
      --end;
      
      
      char tmp;

      while(str < end){
          tmp   = *str;
          *str  = *end;
          *end  = tmp;

          *str++;
          *end--;
      }
}

int main(){
    char in_str[] = "lets reverse ...this string character by character.";
    cout << "\nGiven string:" << in_str;

    cout << "\nReversed string:";

    reverse_str(in_str);
    cout << in_str;
    
    cout << "\n";

    return 0;
}
