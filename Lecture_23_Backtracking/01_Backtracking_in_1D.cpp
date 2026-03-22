#include<iostream>

using namespace std;
void print(int *arr , int n){
    for(int i = 0 ; i < n ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Backtracking(int *arr ,int n ,int i){
    if(i == n){print(arr , n);
    return;}

    arr[i] = i + 1;
    Backtracking(arr , n ,i+1);
    arr[i] -= 2;
}

int main(){
    int arr[5] = {0};
    int n = 5;
    Backtracking(arr , n , 0);
    print(arr , n);
    return 0;
}