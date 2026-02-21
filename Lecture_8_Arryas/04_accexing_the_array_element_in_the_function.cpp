#include<iostream>
using namespace std;
void fun(int arr[] , int n){
    // int n = sizeof(arr)/sizeof(int);
    for(int i = 0 ; i < n ; i++ ){
        cout << arr[i] << ", ";
    }
}

int main(){
    int arr[] ={2,4,6,8,10};
    int n = sizeof(arr)/sizeof(int);
    fun(arr , n);
}