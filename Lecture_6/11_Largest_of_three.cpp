#include<iostream>

using namespace std;

int largest(int a , int b , int c){
    if(a > b && a > c){return a;}
    else if (b > a && b > c){return b;}
    else{return c;}
}

int main(){
    // int n1 , n2 , n3 ;
    cout << largest(231 ,432 ,324) << " is the largest number " << endl ;
    return 0;
}