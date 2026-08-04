#include <iostream>
using namespace std;

bool prime(int n){

    if(n<=1){
        return false;
    }
     for(int i = 2 ; i < n ; i++){ // [ i*i <= n ] can also be used for more effiecient coding

         if(n%i == 0){
             return false;  
         }
    }
     return true;    
}

int main(){
    int n = 18;

    for(int i = 2; i<=n ; i++){
        if(prime(i)){
            cout << i << endl;
        }
    }

    return 0;
}