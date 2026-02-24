#include<iostream>

using namespace std;

int printindex(int *arr , int n , int terget){
    int mid , low , high;
    low = 0;
    high = n - 1 ;
    while(low <= high){
        mid = (high + low) / 2 ;
        if(arr[mid] = terget){
            return mid;
        }
        if(terget > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(int) ;
    int terget = 7;

    cout <<printindex(arr , n , terget) << endl;

}