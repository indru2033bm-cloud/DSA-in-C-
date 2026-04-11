#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

template<class T>
class stack{
    list<T>ll;
    public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        // if(isempty()){
        //     cout << "Stack is empty" << endl;
        //     return ;
        // }
        ll.pop_front();
    }
    T top(){
        // if(isempty()){
        //     cout << "Stack is empty "<< endl;
        //     return ;
        // }
        return ll.front();
    }
    bool isempty(){
        return ll.size() == 0;
    }
};
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
