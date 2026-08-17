#include <iostream>
using namespace std;

int sumArray(int arr[], int size, int sum){ 
    
    for(int i=0 ; i<size ; i++ ){
         sum+= arr[i];

    }
    return sum;
}

int prodArray(int arr[], int size, int prod){
    for(int i=0; i<size ; i++){
        prod *= arr[i];
    }
    return prod;
}

int main(){
    int arr[] = {9, 2, 4, 11};
    int size = 4;
    int sum = 0;
    int prod = 1;
    cout << "Sum = " << sumArray( arr, size, sum) << endl;
    cout << "Product = " << prodArray( arr, size, prod) << endl;
   
    return 0;

}