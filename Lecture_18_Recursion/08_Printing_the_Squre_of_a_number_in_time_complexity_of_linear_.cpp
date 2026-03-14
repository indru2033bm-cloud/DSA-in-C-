#include<iostream>
#include<iostream>

using namespace std;
int pow(int x , int n){
    if( n == 1){return x;}

    return x * pow(x , n - 1);
}
int main(){
    cout << pow(3 ,5)<< "\n";
    return 0;
}
