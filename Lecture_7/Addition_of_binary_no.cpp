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
int sbin(int a){
    int n = a ;
    int dec = 0 ;
    int pow = 1 ; 
    while(n != 0){
        int last = n % 10 ;
        dec += last * pow ;
        pow *= 2 ;
        n /= 10 ;
    }
    return  dec ;
}
int sum(int a ,int b){
     int n1 = fbin(a);
     int n2 = sbin(b);
    //  int pow = 1 , finsum ;
     
     
     int sum = n1 + n2 ;
    // //  return sum ;
    // while(sum != 0){
    //     int rem = sum % 2 ;
    //     finsum += rem * pow ;
    //     sum /= 2 ;
    //     pow *= 10 ;
    // }
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
    cout << sum(10 , 11) << endl;
    return 0 ;
}