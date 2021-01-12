#ifndef SK_LIB_STRINGS

void reverse_string(char *str){
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


#endif /*SK_LIB_STRINGS*/
