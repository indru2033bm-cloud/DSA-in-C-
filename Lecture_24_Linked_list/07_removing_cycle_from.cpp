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
    public:
    Node* head;
    Node* tail;
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
};
void printll(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL\n";
}

void Removecycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;
        if(slow == fast){
            cout << "Cycle exist\n";
            isCycle = true;
            ;break;
        }
    }

    if(!isCycle){
            cout << "Cycle not exit\n";
            return ;
        }
        slow = head;
        if(slow == fast){
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = NULL;
        }else{
            Node* prev = NULL;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;


    }
}

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // creating cycle
    ll.tail->next = ll.head;

    Removecycle(ll.head);
    printll(ll.head);

     return 0;
}