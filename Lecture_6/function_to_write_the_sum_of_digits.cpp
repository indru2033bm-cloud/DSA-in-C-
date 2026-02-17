#include<iostream>

using namespace std;

int sum_of_digits(int n){
    int sum = 0;
    while(n != 0){
        int las = n % 10 ;
        sum  += las ;
         n /= 10 ;
    }
    return sum ;
}

int main(){
    int n = 4563 ;
    // cout << "Enter a number: ";
    // cin>> n ;
    cout << "Sum of digits is " << sum_of_digits(n) << endl ;
    return 0;
    
}