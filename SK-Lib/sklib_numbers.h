#include<iostream>
#ifndef SKLIB_NUMBERS
using namespace std;
/*
  Basic arithmetic operations
*/

//Sum up two numbers
int sum_up(int a,int b){
  return (a+b);
}

//Print array of numbers
void print(int arrList[]){
  int i=0;
  for(i=0;arrList[i]!='\0';i++) cout << arrList[i] << " ";
}

int find_the_biggest_of_the_array(int *numList){
      int biggestNum=*numList;
      
      while(*numList){
          if(biggestNum < *numList) biggestNum = *numList;
          ++numList;
      }

      return biggestNum;
}

#endif /*SKLIB_NUMBERS*/
