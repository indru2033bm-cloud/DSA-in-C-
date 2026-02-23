#include<iostream>

using namespace std;

void maxsubarray(int *arr , int n){
    int maxsum = INT16_MIN;
    for(int st = 0 ; st < n ; st++){
        int sum = 0;
        for(int end = st ; end < n ; end++){
            sum += arr[end];
        }
        cout << sum << endl;
        maxsum = max(maxsum , sum);
    }
    cout << "MAx sum of a subarray is : "<< maxsum <<endl;
}

int main(){
    int arr[6] = { 2 , -3 , 6 ,-5 , 4 , 2 };
    int n = 6;

    maxsubarray(arr , n);
}