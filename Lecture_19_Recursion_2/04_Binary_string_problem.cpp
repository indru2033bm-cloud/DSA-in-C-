#include<iostream>

using namespace std;
void Binary_string(int n , int lastplace , string ans){
    if(n == 0){
        cout << ans << endl;
        return ;
    }
    if(lastplace != 1){
        Binary_string(n - 1 , 0 ,ans + '0');
        Binary_string(n - 1 , 1 , ans + '1');
    }else{
        Binary_string(n - 1 , 0 ,ans + '0');
    }
}
int main(){
    string ans = "";
    Binary_string(3 , 0 ,ans);
    return 0;
}