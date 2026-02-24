#include<iostream>
using namespace std;

void Watertraped(int *arr , int n){
    int leftmax[20000] , rightmax[20000];
    leftmax[0] = arr[0];
    rightmax[n - 1] = arr[n - 1];
    for(int i = 1 ; i < n ; i++){
        leftmax[i] = max(leftmax[i - 1] , arr[i - 1]);
    } 
    for( int i = n - 2 ; i >= 0 ; i-- ){
        rightmax[i] = max(rightmax[i + 1] , arr[i + 1]);
    }
    int watertraped = 0;
    for( int i = 0 ; i < n ; i++){
        int currentwater = min(leftmax[i] , rightmax[i]) - arr[i];
        if(currentwater > 0){
            watertraped += currentwater;
        }
    }
    cout << "Total water traped: " << watertraped <<endl;
}

int main(){
    int arr[5] = {1 , 5 , 1 , 1 , 4};
    // int maxin;
    int n = sizeof(arr) / sizeof(int);

    Watertraped(arr , n);
  
}