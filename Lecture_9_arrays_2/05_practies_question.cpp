#include<iostream>

using namespace std;

bool Duplication( int *arr , int n){
// int st = 0 ;
// int end = n - 1;
// while( st < end){
//     if(arr[st] == arr[end]){
//         return true;
//     }
//     else
//     return false;
//     st++;
//     end--;
//}
for(int i = 0 ; i < n - 1 ; i++){
    for(int j = i+1 ; j < n ; j++){
        if( arr[i] == arr[j])
        return true;
    } 
}
return false;
}
 int main(){
    int arr[] = { 1 , 2 , 3 , 1 , 5 };
    int n = sizeof(arr) / sizeof(int) ;

    cout << Duplication( arr , n);

 }