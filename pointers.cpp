#include <iostream>
using namespace std;

int main(){
      int a=10;
      int b=20;

      int *addrVal_of_a = &a;
      int *addrVal_of_b = &b;

      cout << "\na = " << a;
      cout << "\nb = " << b;
      cout << "\nAddress of a = " << addrVal_of_a;
      cout << "\nAddress of b = " << addrVal_of_b;
      cout << "\n";
      return 0;
}
