// sum of numbers from 1 to n using while loop
#include <iostream>
using namespace std;

int main() {
  int i=1;
  int n=4;
  int sum=0;

  while(i<=n) {
    sum+=i;
    i++;
  } if( i>n )
  cout << "sum: " << sum << endl;

    return 0;
}