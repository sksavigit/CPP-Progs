#ifndef SK_LIB_STRINGS

/*
  Reverse the given string.
  Ex: 
    String -> CHECK THIS OUT
    Output -> TUO SIHT KCEHC
*/
void reverse_string(char *str){
      char *end = str; //store the reference in another pointer variable

      if(str){
          while(*end) ++end;
      }
      --end;//move the pointer reference to the last but one

      char tmp;

      while(str < end){
          tmp   = *str;
          *str  = *end; // keep swapping the items until the pointers move to the middle
          *end  = tmp;

          *str++;
          *end--;
      }

}

/*
  Check if the given string is a palindrome
*/

bool isPalindrome(char *str){
    char *tail = str;
    bool retV=true;
    if(str){
        while(*tail) ++tail;

    }
    --tail;

    while(str < tail){
        if(*str!=*tail) retV = false;
        str++;
        tail--;
    }
  
    return retV;
}

#endif /*SK_LIB_STRINGS*/
