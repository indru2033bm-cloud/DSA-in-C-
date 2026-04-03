#include<iostream>

using namespace std;

//Node class
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

//Linked list class
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head = NULL;
        tail = NULL;
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
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
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
    void insert(int val,int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i= 0; i < pos - 1;i++){
            if(temp == NULL){
                cout << "INvaled POsition\n";
                return;
            }
            temp = temp->next;
            // temp->next = newNode;
        }

        newNode->next = temp->next;
            temp->next = newNode;
    }
};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(100,3);
    ll.printll();
    return 0;
}