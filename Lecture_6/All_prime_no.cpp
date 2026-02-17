#include<iostream>

using namespace std;

int inprime(int n){
    if (n == 1){return false ;}
    for ( int i = 2 ; i <= n-1 ; i++){
        if ( n % i == 0){
            return false ;
        }
    }
    return true ;
}

int printprime(int n){
    for ( int i = 1 ; i <= n ; i++){
        if (inprime(i)){
            cout << i << " " ;
        }
    }
}
int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n ;
    printprime(n);
    return 0 ;
}