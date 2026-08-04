#include <iostream>
using namespace std;
 
int main() {
  int n = 4;

  for( int i=0; i<n; i++) { //outer loop ( i indicates columns )
    char ch = 'A';

    for(int j=0; j<n; j++) { //inner loop ( j indicates rows )
      cout << ch;
      ch= ch + 1; // 65 + 1 => 66 => 'B'

    }
    cout << endl;
  }


  return 0;
}