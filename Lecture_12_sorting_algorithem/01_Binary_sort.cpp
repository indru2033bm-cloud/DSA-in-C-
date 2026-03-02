#include<iostream>

using namespace std;
void bobal_sort(int *arr , int n){
        for(int i = 0 ; i < n-1 ; i++){
            bool isswap = false;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
                isswap = true;
            }
        }
        if(!isswap){
            return;
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    // int arr[] = {5, 2 ,4 ,1  ,3 };
    int arr[] = {1 ,2 , 3 ,4 ,5 ,6 , 7 ,8 ,9 ,10 };

    int n = sizeof(arr) / sizeof(int);

    bobal_sort(arr , n);

}