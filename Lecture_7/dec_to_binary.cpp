#include<iostream>

using namespace std;

int dec_to_bin(int decnum){
    int n = decnum ;
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
 cout << dec_to_bin(223) << endl ;
}