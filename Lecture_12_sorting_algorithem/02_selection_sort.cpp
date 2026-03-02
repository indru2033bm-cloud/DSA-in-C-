#include<iostream>

using namespace std;
void print(int arr[] , int n){
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
}
void selectionsort(int arr[],int n){
for(int i = 0 ; i < n - 1 ; i++){
    int minind = i;
    for(int j = i+1 ; j < n ; j++){
        if(arr[j] > arr[minind]){
            minind = j;
        }
    }
    swap(arr[i],arr[minind]);
}
print(arr , n);
}

int main(){
    int arr[] = {2 ,5 ,1 ,3 ,4};
    int n = sizeof(arr) / sizeof(int);

    selectionsort(arr , n);

}