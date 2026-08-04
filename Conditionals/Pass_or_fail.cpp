#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks:";
    cin >> marks;

    if(marks >= 90 ) {
        cout << "A\n";
    }else if(marks >= 80 && marks < 90) {
        cout << "B\n";
    }else if( marks >= 70 && marks < 80) {
        cout << "C\n";
    }else {
        cout << "failed\n";
    }




    return 0;