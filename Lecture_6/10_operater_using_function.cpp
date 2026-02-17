#include<iostream>

using namespace std;

int operater(int a , int b){
    cout << "a^2 + b^2 + 2 * ab = " << a * a + b * b + 2 * a * b << endl ;
}

int main(){
    operater(2 , 5);
    return 0;
}