#include <iostream>
using namespace std;

void uniValue(int arr[], int sz){
    for(int i=0; i<sz; i++){
        int count = 0;
        for(int j=0; j<sz; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout << arr[i] << " ";
        }   
    }

}
int main(){
    int arr[] = {2, 3, 4, 9, 4, 2};
    int sz = 6;
      
    uniValue(arr, sz);
    
    return 0;
}