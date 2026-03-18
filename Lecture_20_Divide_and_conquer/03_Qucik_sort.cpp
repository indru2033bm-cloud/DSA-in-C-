#include<iostream>

using namespace std;
int partition(int *arr , int si ,int ei){
    int i = si - 1;
    int pivot = arr[ei];
    for(int j = si ; j < ei ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i] ,arr[j]);
        }
    }
    i++;
    swap(arr[i] ,arr[ei]);
    return i;

}

void QuickSort(int *arr , int si , int ei){ // Average time complexity is : O(n * logn) || but SC is : O(1)
    if(si >= ei){return ;}
    int pivoteIdx = partition(arr , si ,ei);
    QuickSort(arr , si ,pivoteIdx - 1);
    QuickSort(arr , pivoteIdx + 1 , ei);

}

void Printarray(int *arr , int n){
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[6] = {6 , 3 , 7, 5 , 2 ,4 };
    int n = 6;
    QuickSort(arr , 0 ,n - 1);
    Printarray(arr , n);
    return 0;
}