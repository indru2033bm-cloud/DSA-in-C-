#include<iostream>

using namespace std;
int fun(int n){
    if(n == 0){
        return 1;
    }
    return n * fun(n - 1);
}
int main(){
int ans = fun(6);
cout << ans << "\n";
return 0;
}