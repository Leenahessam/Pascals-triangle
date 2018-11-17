#include <iostream>
#include <stdlib.h>
using namespace std;

int C(int n, int k) {
  if (n < k){
    cout<<"invalid"<<endl;
    exit (EXIT_FAILURE);
  }

  if (k == 0 || k == n) {
    return 1;
  } else {
    return C(n - 1, k - 1) + C(n - 1, k);
  }
}


int main (){
cout<<C(6,2);
}
