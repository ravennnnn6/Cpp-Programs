#include <iostream>
#include <vector>
using namespace std; 

int main(){
    vector<int>vec;

    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;

    return 0;
}