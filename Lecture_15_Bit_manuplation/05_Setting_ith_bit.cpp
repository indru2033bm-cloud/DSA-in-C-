#include<iostream>

using namespace std;
int Setithbit(int num , int i){
    int bitmask = 1 << i;
    return (num | bitmask);
}
int main(){
 cout << Setithbit(10 , 2) << endl;
return 0;
}