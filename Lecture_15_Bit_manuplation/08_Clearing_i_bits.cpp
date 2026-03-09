#include<iostream>

using namespace std;
int ClearIBit(int num ,int i){
    int bitMask = ~(0) << i;
    num = num & bitMask;
    return num;
}

int main(){
cout << ClearIBit(15 , 3);
return 0;
}