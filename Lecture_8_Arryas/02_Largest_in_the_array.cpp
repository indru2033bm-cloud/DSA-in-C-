#include<iostream>

using namespace std;

int main(){
    int n ;
    cout << "Enter a size of array: ";
    cin >> n ;
    int arr[n];
cout << "Enter the elements of an array:" << endl;
    for ( int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "The largest element is : " << max << endl;
}