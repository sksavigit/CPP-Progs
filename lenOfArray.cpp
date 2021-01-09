#include <bits/stdc++.h>
using namespace std;

#define arrLen(t) ((char *)(&t+1) - (char *)(&t))


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = arrLen(arr)/arrLen(arr[0]);
    
    cout << " \nBy #define macro and pointer :";
    cout << size ;
    cout << "\n";

    cout << "Using pointer:";
    size = *(&arr+1) - (arr);
    
    cout << size;

    return 0;
}
