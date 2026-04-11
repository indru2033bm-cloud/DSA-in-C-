#include<iostream>
#include<vector>
using namespace std;
template<class T>
class Stack{
    vector<T> vec;
    public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        // if(isempty()){
        //     cout << "stack is empty"<< endl;
        // return;
        // }
        vec.pop_back();
    }
    T top(){
        // if(isempty()){
        //     cout << "stack is empty"<< endl;
        // return -1;
        // }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }
    bool isempty(){
        return vec.size() == 0;
    }
};
int main(){
    Stack<string> s;
    s.push("apana college");
    s.push("from");
    s.push("coding");
    s.push("Learning");
    while(!s.isempty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;

}