#include<iostream>
#include<string>
using namespace std;

template<class T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack{
    Node<T>* head;
    public:
    Stack(){
        head = NULL;
    }
    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL){
            head = newNode;
            return;
        }else{
        newNode->next = head;
        head = newNode;
       }
    }
    void pop(){
        if(isempty()){
            cout << "Stack is empty" << endl;
            return ;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
    T top(){
        if(isempty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->data;

    }
    bool isempty(){
        return head == NULL;
    }
};

int main(){
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout << s.top() << " ";
    s.pop();
    }
    return 0;
}