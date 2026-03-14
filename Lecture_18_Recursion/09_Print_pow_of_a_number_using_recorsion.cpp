#include<iostream>

using namespace std;
int pow(int x ,int n){
    if(n == 0){return 1;}

    int halfpower = pow(x , n/2);
    int halfpowersqur = halfpower * halfpower;

    if ( n % 2 != 0){return x * halfpowersqur;}
    return halfpowersqur;
}
int main(){
cout << pow( 2 ,10);
return 0;
}