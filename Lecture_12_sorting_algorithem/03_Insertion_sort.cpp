#include<iostream>

using namespace std;
void print(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}

void inserction(int *arr ,int n){
    for(int i = 1 ; i < n ; i++){
        // int curr = i;
        int curr = arr[i];
        int prev = i - 1; 
        while(prev >= 0 && arr[prev] < curr){
            swap(arr[prev],arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
        // curr++;
    }
    print(arr , n);
}
int main(){
    int arr[] = {2 , 5 ,1 ,3 ,4};
    int n = sizeof(arr) / sizeof(int);
    inserction(arr , n);
}