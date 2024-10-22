#include<iostream>
#include "sklib_strings.h"
#ifndef SKLIB_NUMBERS
using namespace std;
/*
  Basic arithmetic operations
*/

//Sum up two numbers
int sum_up(int a,int b){
  return (a+b);
}

int find_the_biggest_of_the_array(int numList[],int arrSize){
      int biggestNum=0;
      if(arrSize >0) biggestNum=numList[0];

      while(arrSize > 0){
          if(biggestNum < numList[arrSize-1]) biggestNum = numList[arrSize-1];
          arrSize--;
      }

      return biggestNum;
}


/**
  Functions to handle big numbers
*/
void sum_two_big_numbers(char* n1,char* n2,char result[]){

    int i=0;
    int n1size=0;
    int n2size=0;
    if(n2) {
    while(*n2){
      ++n2;
      i++;
    }
      --n2;
      n2size=i;
      i=0;
    }
    if(n1){
      while(*n1){
      ++n1;
      i++;
      }
      --n1;
      n1size=i;
    }

    int carriage=0;
    int sum=0;
    int arrSize=(n1size >= n2size ? n1size+1 : n2size+1);
    int n1_tmp = abs(48-(int)*n1);
    int n2_tmp = abs(48-(int)*n2);
    --n1;
    --n2;
    i=0;
    for(;i < arrSize;i++){
          sum = n2_tmp + n1_tmp + carriage;
          //cout << "\nn1_tmp:"<<n1_tmp<<" n2_tmp:"<<n2_tmp<<" carriage:"<<carriage<<" i="<<i;
          result[i] = '0'+(sum%10);
          carriage=sum/10;

          if(n2size > 1){
            n2_tmp= abs(48-(int)*n2);
            --n2;
          }else{
            n2_tmp=0;
          }

          if(n1size > 1){
            n1_tmp=abs(48-(int)*n1);
            --n1;
          }else{
            n1_tmp=0;
          }

          --n1size;
          --n2size;

      }
      result[i]='0'+carriage;

      reverse_string(result);
}

#endif /*SKLIB_NUMBERS*/
