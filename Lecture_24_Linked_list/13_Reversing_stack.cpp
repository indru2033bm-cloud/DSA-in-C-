#include<iostream>
#include<stack>
using namespace std;
void pushATbottem(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return ;
    }
    int temp = s.top();
    s.pop();
    pushATbottem(s,val);
    s.push(temp);
}
void revers(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int temp = s.top();
    s.pop();
    revers(s);
    pushATbottem(s,temp);
}
void printstack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    printstack(s);

    revers(s);
    printstack(s);
    return 0;
}