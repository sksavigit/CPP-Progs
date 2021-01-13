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

void sum_two_big_numbers(char* n1,char* n2,char* res){
    int i=0;
    int n1size=0;
    int n2size=0;
    if(n2) {
    while(*n2){
    ++n2;
    i++;
    }
      --n2;
      n1size=i;
      i=0;
    }
    if(n1){
      while(*n1){
      ++n1;
      i++;
      }
      --n1;
      n2size=i;
    }
    cout << "\nn2->" << *n2;
    cout << "\nn1->" << *n1;
    cout << "\nn1size=" << n1size;
    cout << "\nn2size=" << n2size;

    int carriage=0;
    int sum=0;
    char result[n1size>n2size ? n1size+1 : n2size+1];
    int resi=0;
    if(n1size >= n2size){
      int tmp=*n2;
      cout << tmp;
      for(i=40;i < n1size;i++){
          sum = (tmp) + (int)(*n1)+carriage;
          cout << "\n" << sum;
          carriage=sum%10;
          result[resi] = (char)(sum-carriage);
          resi++;
          --n1;
          if(n2size > i) tmp=0;
          else{
          tmp= (int) *n2;
          --n2;
          }
      }

      if(carriage > 0) result[resi]=(char)carriage;
    }
    result[resi++]='\0';
    res = result;
}


#endif /*SKLIB_NUMBERS*/
