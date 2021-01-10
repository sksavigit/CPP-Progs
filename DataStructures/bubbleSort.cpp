#include<iostream>
using namespace std;
#define lengthOf(type) ((char *) (&type+1) - (char *)(&type))

void print_it(int arrList[],int arrSize){
    int i;
    //cout << arrSize;
    for(i = 0; i < arrSize;i++){
        if( i > 0 && i < arrSize){
          cout << " " << arrList[i];
        }else{
          cout << arrList[i];
        }
    }

    cout << "\n";
}

void swap_it(int *a,int *b){
  *a = *a + *b ;
  *b = *a - *b ;
  *a = *a - *b ;
}

void do_bubble_sort(int arrList[],int arrSize,int flag,char sort_order){
      int i,j;
      for(i=0;i<arrSize-1;i++){
        for(j=0;j<arrSize-i-1;j++){
          //Swap-Values
          if(sort_order=='a' || sort_order=='A'){
            if(arrList[j] > arrList[j+1]){
              swap_it(&arrList[j],&arrList[j+1]);
            }
          }
          if(sort_order=='d' || sort_order=='D')
            if(arrList[j] < arrList[j+1])
              swap_it(&arrList[j+1],&arrList[j]);
        }
        if(flag==0)
          print_it(arrList,arrSize);
      }
}

int main(){
    
    int arr[] = {5,-1,3,0,9,45,1,2,2,4,98};
    int arrSize = lengthOf(arr)/lengthOf(arr[0]);
    int sortPrintFlag=0;// 0 - print each sorted array , 1 - set the printing option off
    char sortOrder='a';// a = ascending order , d = descending order
    system("clear");
    //Before Sort
    cout << "\nBefore sorting :\n";
    print_it(arr,arrSize);
  
    if(sortPrintFlag==0){
      cout << "\n Printing each sorted array until the job is done.\n";
    }
    //Bubble sort
    do_bubble_sort(arr,arrSize,sortPrintFlag,sortOrder);

    //After sorting
    cout << "\nAfter sorting  :\n";
    print_it(arr,arrSize);

    cout <<"\n";
 return 0;
}
