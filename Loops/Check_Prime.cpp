//  Check prime
#include <iostream>
using namespace std;

int main() {
   int n = 12;
   bool isPrime = true;

   for(int i=2; i*i <= n; i++) { // previosly it was i <= n/2 but we can optimize it by using i*i <= n
    if(n % i == 0) {
      isPrime = false;
      break;
    }
   }

   if( isPrime == true) {
    cout << "prime number";
  } else {
    cout << "non prime number";
   }
    return 0;
}