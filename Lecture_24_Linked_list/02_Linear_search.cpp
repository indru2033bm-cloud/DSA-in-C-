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
    int Search(int key){
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            if(temp->data == key){
              cout << "Element fount at position " << count  << endl;
            }
            count++;
            temp = temp->next;
        } 
        return -1;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.Search(20);
     return 0;

}