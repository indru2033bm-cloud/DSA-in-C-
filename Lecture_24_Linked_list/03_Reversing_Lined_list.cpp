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
    void print(){
        Node* temp = head;
        if(temp == NULL){
            cout << "LIst is empty\n";
            return ;
        }
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout <<"NULL\n";
    }
    void Reverse(){
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        swap(head,tail);

    }
};
int main(){
List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    ll.Reverse();
    ll.print();
     return 0;
}