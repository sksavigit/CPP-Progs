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

void sum_two_big_numbers(char* n1,int n1size,char* n2,int n2size,char res[]){
    int i=0;
    for(i=0;i < n1size-1;i++) {
    cout << *n1;
    *n1++;
    }
    for(i=0;i < n2size;i++) n2++;
    int carriage=0;
    int sum=0;
    char result[n1size>n2size ? n1size+1 : n2size+1];
    int resi=0;
    if(n1size >= n2size){
      int tmp=*n2;
      for(i=0;i < n1size;i++){
          sum = (tmp) + (int)(*n1)+carriage;
          carriage=sum%10;
          result[resi] = (char)(sum-carriage);
          //cout << result[resi];
          resi++;
          n1--;
          if(n2size>i) tmp=0;
          else{
          tmp= (int) *n2;
          n2--;
          }
      }

      if(carriage > 0) result[resi]=(char)carriage;
    }
    result[resi++]='\0';
    res = result;
}


#endif /*SKLIB_NUMBERS*/
