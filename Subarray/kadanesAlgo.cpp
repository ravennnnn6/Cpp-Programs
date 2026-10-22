#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int arr[6] = {1, -3, 4, 5, -2, 5};
    int n = 6;

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i<n; i++){
            currSum += arr[i];

            maxSum = max(maxSum, currSum);

            if(currSum < 0){
                currSum = 0;
            }
        
    }
    cout << maxSum << endl;
    return 0;
    
}