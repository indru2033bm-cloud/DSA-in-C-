#include<iostream>

using namespace std;

void maxsubarray(int arr[] , int a){
    for( int st = 0 ; st < a ; st++ ){
        for( int end = st ; end < a ; end++){
            // cout << "(" << st <<"," << end << ")  ";
            int sum = 0;
            for ( int i = st ; i <= end ;i++){
                sum += arr[i];
                // cout << sum;
                // cout << arr[i] ;
            }
            cout << sum ;
            cout << ", ";
        }
        cout << "\n";
    }
}

int main(){
    int arr[6] = {2 , -3 , 6 , -5 , 4 , 2 };
    int n = 6;
    // cout << printsubarray(arr , n) <<endl;
    maxsubarray(arr , n );

}