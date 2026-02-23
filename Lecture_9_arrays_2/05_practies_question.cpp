#include<iostream>

using namespace std;

bool Duplication( int *arr , int n){
int st = 0;
int end = n - 1;
while( st < end){
    if(arr[st] == arr[end]){
        return true;
    }
    else
    return false;
    st++;
    end--;
}
}
 int main(){
    int arr[] = { 1 , 2 , 1 , 4 , 5 };
    int n = sizeof(arr) / sizeof(int) ;

    cout << Duplication( arr , n);

 }