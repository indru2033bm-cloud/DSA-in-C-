#include<iostream>

using namespace std;
void maxsub_of_subarray(int *arr ,int n){
 int maxsum = INT16_MIN;
 int sum = 0;
 for(int i = 0 ;i < n ; i++){
    sum += arr[i];
    maxsum = max(maxsum , sum);
    if( sum < 0){
        sum = 0;
    }
 }

 cout << "Maximum sum: " << maxsum <<endl;
 cout << " sum: " << sum <<endl;
}

int main(){
    int arr[] = {1 , -3 , 4 ,5 ,-3 , 6}; // 2 , -3 , 6 ,-5 , 4 , 2 
    int n = sizeof(arr)/sizeof(int);

    maxsub_of_subarray(arr , n);
}