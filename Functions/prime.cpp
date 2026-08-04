#include <iostream>
using namespace std;

bool prime( int n){

    if(n<=1){
        return false;
    }
    for(int i=2 ; i*i<=n ; i++){
        if(n%i == 0){
            return false;
            break;
        }
       
    }
    return true;
}

int main(){
    if(prime(2)){
        cout << "Prime\n";

    }else {
        cout << "non prime\n";
    }
    

    return 0;
}
       