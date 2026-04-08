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
        
            next = NULL;
        
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
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
};
void printll(Node* head){
    Node* current = head;
    while(current != NULL){
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL\n";
}
Node* SplitATmid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
        if(prev != NULL){
            prev->next = NULL;
        }
    return slow; // slow is the head of right half
    }
}
Node* Revers(Node* head){
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev; // new head of reversed list
}
Node* Zig_Zag(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* rightHead = SplitATmid(head);
    Node* rightHeadRev = Revers(rightHead);

    Node* left = head;
    Node* right = rightHeadRev;
    Node* tail = right; // tail will be the last node of zig-zag list

    while(left != NULL && right != NULL){
        Node* leftnext = left->next;
        Node* rightnext = right->next;

        left->next = right;
        right->next = leftnext;
        tail = right;

        left = leftnext;
        right = rightnext;

    }

    if(right != NULL){
        tail->next = right;
    }

    return head;
}

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    cout << "Original List: ";
    printll(ll.head);
    ll.head = Zig_Zag(ll.head);
    cout << "Zig-Zag List: ";
    printll(ll.head);
    return 0;
}