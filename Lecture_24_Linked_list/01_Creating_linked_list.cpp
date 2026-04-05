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
    ~Node(){
        if(next != NULL){
            // cout << "~Node" << data <<endl;
            delete next;
            next = NULL;
        }
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

    ~list(){
        if(head != NULL){
            // cout << "~List\n";
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
    void pop_front(){
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        // if(head == NULL){
        //     cout << "List is empty\n";
        //     return;
        // }
        // if(head->next = NULL){
        //     delete head;
        //     head = tail = NULL;
        //     return;
        // }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;

    }
};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.pop_back();
    ll.printll();
    return 0;
}