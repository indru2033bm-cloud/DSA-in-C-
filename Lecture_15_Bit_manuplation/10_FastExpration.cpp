#include<iostream>

using namespace std;
void FastExtonental(int x , int n){
    int ans = 1;
    while(n > 0){
        int last = n & 1;
        if(last){
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }
    cout << ans << endl;
    // cout << x << endl;
}
int main(){
FastExtonental(3 , 5);
return 0;
}