#include <iostream>
using namespace std;


bool powerOf2(int n){
    
    if(n<0){
        return false;
    }
    if(n==1){
        return true;
    }
    while(n>1){

        if( n%2 != 0){
            return false;
        }

        n = n >> 1; // n divided by 2 to the power something      
    }
    return true;
}

int main(){
    int n = 1;

    if(powerOf2(n)){
        cout << "Power of 2" << endl;        
    }else{
        cout << "not power of 2" << endl;       
    }
    return 0;
}