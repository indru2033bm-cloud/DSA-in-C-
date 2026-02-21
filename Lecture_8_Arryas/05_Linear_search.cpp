#include<iostream>

using namespace std;

int linerserc(int ar[] , int n , int kei){
    for ( int i = 0 ; i < n ; i++ ){
        // ar[i] == key ? return i : return -1;
        if ( ar[i] == kei){
            return i;
        }
    }
    return -1 ;

}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int nu = sizeof(arr)/sizeof(int);
    int key = 10 ;
    cout << nu <<endl ;
    cout << linerserc(arr , nu , key) << endl;

}