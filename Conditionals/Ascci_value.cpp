#include <iostream>
using namespace std;

int main() {

   char ch;
   cout << "enter char:";
   cin >> ch;

   if(ch >= 97 && ch <= 123) {
    cout << "lower chase\n";
   }else if(ch >= 65 && ch <=90 ) {
    cout << "uppercase\n";
   }else {
    cout << "invalid char\n";
   }


    return 0;
}
