#include<iostream>

using namespace std;

int palindrome(int n){
    int rev = 0;
    while(n != 0){
        int las = n % 10 ;
        rev = rev * 10 + las ;
         n /= 10 ;
    }
    return rev ;
}

int main(){
    int n ;
    cout << "Enter a number: ";
    cin>> n ;
    if ( n == palindrome(n)){cout << n <<" is palindrome number " << endl;}
    else{cout << n << " is not palindrome number "<< endl;}
    
}