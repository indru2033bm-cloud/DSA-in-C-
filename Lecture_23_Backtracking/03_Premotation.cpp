#include<iostream>

using namespace std;
void Premotation(string str , string ans){
    int n = str.size();
    if(n == 0){
        cout << ans << endl;
        return ;
    }
    for(int i = 0 ; i < n;i++){
        char ch = str[i];
        string nextstr = str.substr(0,i) + str.substr(i+1 , n);
        Premotation(nextstr , ans + ch);
    }
}
int main(){
    string str = "abcd";
    string ans = "";
    Premotation(str , ans);
    return 0;
}