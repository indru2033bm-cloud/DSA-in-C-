#include<iostream>

using namespace std;

int printarr(int *arr , int n){
   for(int i = 0 ; i < n ; i++){
      cout << arr[i] << " ";
   }
}


int main(){
    int arr[] = {3 ,4 ,6 ,7 ,2 };
    int n = sizeof(arr) / sizeof(int);

    int start = 0 , end = n - 1 ;
    while(start < end){
        swap(arr[start] , arr[end]) ;
        start++;
        end--;
    }
   printarr(arr , n);
}