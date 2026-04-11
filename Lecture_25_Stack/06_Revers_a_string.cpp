#include<iostream>
#include<string>
#include<stack>
using namespace std;

string ReverseString(string &str){ // TC : O(N) SC : O(N)
    string ans;
    stack<char> s;
    for(int i = 0 ; i < str.size(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char ch = s.top();
        ans += ch;
        s.pop();
    }
    return ans;
}

int main(){
    string str = "Apana College";

    cout << "Reversed string: " << ReverseString(str) << endl;
    return 0; 
}