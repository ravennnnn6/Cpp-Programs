#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {33 , 2443 , 233 , 34};
    int size = 4;
    int index = -1;
    int largest = INT_MIN;

    for(int i = 0; i<size ; i++){
        if(nums[i] > largest){
            largest = nums[i];
            index = i;
        }
        
    }
    cout << "Largest index = " << index << endl;



    return 0;
}