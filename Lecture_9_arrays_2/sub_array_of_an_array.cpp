#include<iostream>

using namespace std;

void printsubarray(int arr[] , int a){
    for( int st = 0 ; st < a ; st++ ){
        for( int end = st ; end < a ; end++){
            // cout << "(" << st <<"," << end << ")  ";
            for ( int i = st ; i <= end ;i++){
                cout << arr[i] ;
            }
            cout << ", ";
        }
        cout << "\n";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    // cout << printsubarray(arr , n) <<endl;
    printsubarray(arr , n );

}