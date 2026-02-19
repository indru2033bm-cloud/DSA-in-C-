#include<iostream>

using namespace std;

int fbin(int a ){
    int n = a ;
    int dec = 0 ;
    int pow = 1 ;
    while(n != 0){
        int last = n % 10 ;
        dec += last * pow ;
        pow *= 2 ;
        n /= 10 ;
    }
    return dec ;
}

int sum(int a ,int b){
     int n1 = fbin(a);
     int n2 = fbin(b);
     int sum = n1 + n2 ;

    int n = sum;
    int binnum = 0;
    int pow = 1;
    while(n != 0){
        int rem = n % 2 ;
        binnum += rem * pow ;
        n /= 2 ;
        pow *= 10 ;
        
    }
    return binnum ;

    
}
int main(){
    cout << sum(10 , 1) << endl;
    return 0 ;
}