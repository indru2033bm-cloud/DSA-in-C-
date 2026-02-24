#include<iostream>

using namespace std;

void printarray(int *arr , int n , int terget){

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < arr[terget] && terget < n  ){
            swap(arr[i],arr[terget]);
            cout << terget << endl;
            terget++;
        }
    }
    for(int i = 0 ; i < n ; i++){

        cout<<arr[i] << " ";
    }
}

int main(){
    int arr[] = {1 ,2 ,3 ,4 ,5};
    int n = sizeof(arr) / sizeof(int);
    int terget = 2;

    printarray(arr , n ,terget );
}