#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    float Pi = 3.14;
    float *ptr2 = &Pi;
    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr2) << endl;

    // cout << &a << " = " << ptr << endl;
    // cout << &Pi << " = " << ptr2 << endl ;
}