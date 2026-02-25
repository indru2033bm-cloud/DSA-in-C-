#include<iostream>

using namespace std;

int main(){
    // float *a , b;
    // b = 0;
    // a = 0;
    // cout << a <<endl;
    // return 0;
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;
    cout << cho <<"  " << a <<endl;
}
