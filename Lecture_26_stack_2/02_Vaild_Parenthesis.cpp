#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }else{
            if(st.empty()){
                return false;
            }
            int top = st.top();
            if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string str1 = "({[]})";
    string str2 = "(){}[}" ;
    cout << isValid(str1) << endl; // Output: 1 (true)
    cout << isValid(str2) << endl; // Output: 0 (false)
    return 0;
}