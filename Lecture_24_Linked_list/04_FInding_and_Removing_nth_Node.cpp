#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }

};  
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }

    }
    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int size(){
        int sz = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
    }
    void removeNthNode(int n){
        int sz = size();
        Node* prev = head;
        if(n > sz || n <= 0){
            cout << "Invalid position\n";
            return;
        }
        if(n == sz){
            head = head->next;
            prev->next = NULL;
            delete prev;
            return;
        }
        for(int i = 0; i < sz - n ;i++){
            prev = prev->next;
        }
        int val = prev->next->data;
        cout << "Removing node with value " << val << endl;
        prev->next = prev->next->next;
    }
};
int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printll();
    ll.removeNthNode(1);
    ll.printll();
     return 0;
}