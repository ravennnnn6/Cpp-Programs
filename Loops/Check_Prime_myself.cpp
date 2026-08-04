// Check prime or not
// idk how its working but its working 
#include <iostream>
using namespace std;

int main() {
   int n = 4;
   int i = 2;
   
   while( i<=n-1 ) {
    if(n%2==0) {
      cout << "non prime\n";
      break;

    } else{
      i++;
      cout << "prime\n";
    }

    return 0;

   }
}