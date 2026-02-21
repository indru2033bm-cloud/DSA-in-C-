#include<iostream>

using namespace std;
int main(){
    int arr[] = { 0 , 1 , 0 , 2 , 10};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0 ; i < n ; i++){
        if( arr[i] != 0){
            i++;
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp ;
        }
    }
    for ( int i = 0; i < n ; i++ ){
        cout << arr[i] << " ";
    }
}