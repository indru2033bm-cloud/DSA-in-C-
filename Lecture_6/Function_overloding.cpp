#include<iostream>

using namespace std;

int sum(int a , int b){
    cout<< a + b << endl ;
}

double sum(double a , double b){ // function overloading with different data type
    cout<< a + b << endl ;
}

int sum(int a , int b , int c){ // function overloading with different number of parameters
    cout<< a + b + c << endl ;
}

int main(){
    sum(2 , 3);
    sum(1.9 , 2.1);
    sum(3,5,1);
    return 0;
}