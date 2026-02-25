#include<iostream>
using namespace std;

int main(){
    int a = 4 , y = 6;
    int *ptr1 = &a , *ptr2 = &y;
    // cout << ptr2 <<endl;
    // cout << ptr1 <<endl;
    ptr2 = ptr1;
    cout << ptr2 << endl;

}
