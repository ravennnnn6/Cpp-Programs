#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(24);
    vec.push_back(22);
    cout << "after push back, size = " << vec.size() << endl;

    cout << vec.at(3) << endl;


    return 0;
}