#include<iostream>

using namespace std;
int bintodec(int binary){
    int n = binary;
    int dec = 0 ;
    int pow = 1;
    while(n != 0){
     int lastdig = n % 10;
     int dec += lastdig * pow;
     pow *= 2;
     n /= 10 ;

    }
    cout << dec <<endl;
}

int main(){
bintodec(10010);
return 0 ;
}