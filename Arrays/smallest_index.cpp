#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[]= {5, 15, 22, 199};
    int size = 4;
    int index = -1;
    int smallest = INT_MAX;
    
    for(int i=0 ; i<size ; i++){
       if( nums[i] < smallest){
        smallest = nums[i];
        index = i;
       }
    }
    cout << "Smallest index = " << index << endl;


    return 0;
}