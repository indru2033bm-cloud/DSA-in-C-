#include<iostream>

using namespace std;
int main(){
    int arr[] = { 0 , 1 , 0 , 2 , 10};
    int n = sizeof(arr) / sizeof(int);
    int indx = 0;
    for(int i = 0 ; i < n ; i++){
        if( arr[i] != 0){
            swap(arr[i] , arr[indx]);
            indx++;
        }
    }
    for ( int i = 0; i < n ; i++ ){
        cout << arr[i] << " ";
    }
}