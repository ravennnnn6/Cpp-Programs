#include <iostream>
using namespace std;
int main(){

    int n = 4;

    //top
    
    for(int i=0 ; i<n ; i++){
        // STARS1
        for(int j=0 ; j<i+1 ; j++){
            cout << "*";
        }
        
        // space 
        if(i!=n-1){
            for(int j=0; j<2*(n-i)-2 ; j++){
                cout << " ";
            }

        }
        // stars 2
        for( int j=0; j<i+1 ; j++){
            cout << "*";
        }
       
        cout << endl;
    }
        // bottom

        for(int i=0 ; i<n ; i++){
            //stars
            for(int j = 0; j<n-i ; j++){
                cout << "*";
            }
            // space
            for(int j = 0; j<2*i ; j++){
                cout << " ";
            }
            // stars
            for(int j=0 ; j<n-i ; j++){
                cout << "*";
            }

            cout << endl;
        }      
    return 0;
}