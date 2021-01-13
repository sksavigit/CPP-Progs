#include<iostream>
#ifndef SKLIB_IOSTREAM
using namespace std;

template <typename DT>
void printArray(DT *list,int size){
    bool start=true;
    //Loop through all item and print it on console
    for(;size > 0;size--){
      if(start){
        cout << "[" << *list<<",";
        start=false;
      }else if(size==1){
        cout << *list << "]";
      }else{
        cout << *list <<",";
      }
      list++;
    }

}

#endif /*SKLIB_IOSTREAM*/
