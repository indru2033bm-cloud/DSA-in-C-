#include<iostream>

using namespace std;


int main(){
    int arr[] = {2,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int copy[n];

    //  -------------0-----------------
    // for ( int i = n - 1 ; i >= 0 ; i--){
        //     for (int j = n - i - 1 ; j < n - i ; j++ ){
            //        copy[j] = arr[i];
            //     }
            // }
            // for ( int i = 0 ; i < n ; i++){
                //     cout << copy[i] << " ";
                // }

    //  -------------0-----------------
    
    // for (int i = 0 ; i < n ; i++){
        //     for ( int j = n-i-1 ; j >= n - i - 1 ; j--){
            //         copy[i] = arr[j];
            //     }
            // }
            
            // for (int i = 0 ; i < n ; i++){
                //     cout << copy[i] << " ";
                // }

    //  -------------0-----------------

    for (int i = 0 ; i < n ; i++ ){
        int j = n - i -1 ;
        copy[i] = arr[j];

    }
    for (int i = 0 ; i < n ; i++){
       arr[i] = copy[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << ",";
    }

 return 0;
    
}