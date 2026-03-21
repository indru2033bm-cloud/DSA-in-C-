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
        // cout << curr << endl;
        int prev = i - 1; 
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev],arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
        cout << prev << endl;
        // cout << curr << endl;
        // curr++;
    }
    print(arr , n);
}
int main(){
    int arr[] = {5 , 2 ,1 ,4 ,3};
    int n = sizeof(arr) / sizeof(int);
    inserction(arr , n);
}