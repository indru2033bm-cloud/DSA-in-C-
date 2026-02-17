#include<iostream>

using namespace std;

int odd_or_even(int a){
    if(a % 2 == 0){
        cout<< a <<" is even number " << endl ;
    }
    else{
        cout<< a << " is odd number " << endl ;
    }
}
int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n ;
    odd_or_even(n);
    return 0;
}
