#include<iostream>
#include<vector>

using namespace std;
int* fun(){
    int *ptr = new int;
    *ptr = 1200;
    // cout << *ptr << endl;

    return ptr;
}

int main(){
 int *x = fun();
 cout << *x << endl;
 return 0;
}