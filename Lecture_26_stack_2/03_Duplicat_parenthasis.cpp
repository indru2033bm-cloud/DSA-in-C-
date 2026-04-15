#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isDuplicate(string s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        char ch = s[i];
        if(ch != ')'){
            st.push(ch);
        }else{
            if(!st.empty() && st.top() == '('){
                return true;
            }
            while(!st.empty() && st.top() != '('){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}
int main(){
    string str = "((a + b) + (c + d))";
    cout << isDuplicate(str) << endl; // output: 0(false)
     string str2 = "((a + b) + c)";
    cout << isDuplicate(str2) << endl; // output: 0(false)
        string str3 = "(((a + b) + c))";
    cout << isDuplicate(str3) << endl; // output : 1(true)

}