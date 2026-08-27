#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> vec;

    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(24);
    vec.push_back(22);
    cout << "after push back, size = " << vec.size() << endl;

    for(int val : vec) {
        cout << val << endl;
    }
return 0;
}