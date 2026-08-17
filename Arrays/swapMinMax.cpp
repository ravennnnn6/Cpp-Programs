#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int num[], int size){

    int maximum = INT_MIN;
    int minimum = INT_MAX;
    int maxIndex = -1;
    int minIndex = -1;

    for(int i=0; i<size ; i++){

        if(num[i] > maximum){
            maximum = num[i];
            maxIndex = i;
        }

        if(num[i] < minimum){
            minimum = num[i];
            minIndex = i;
        }
                
    }
    swap(num[maxIndex], num[minIndex]);
}        

int main(){
    int num[] = {1, 2, 4, 33, 23, -5};
    int size = 6;
    swapMinMax(num, size);

    for(int i= 0; i<size ; i++){
         cout << num[i];


    }
    cout << endl;
    return 0;
}