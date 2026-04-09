#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List1{
    public:
    Node* head;
    Node* tail;
    List1(){
        head = tail = NULL;
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
        cout << "NULL\n";
    }
// void find_linked_element(List1 l1, List1 l2){
//     Node* temp1 = l1.head;
//     Node* temp2 = l2.head;
//     while(temp1 != NULL && temp2 != NULL){
//         if(temp1 == temp2){
//             cout << "Linked element found: " << temp1->data << endl;
//             return;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     cout << "No linked element found.\n";
// }
Node* Linking_2_list(List1 &l1, List1 &l2){
    Node* temp1 = l1.head;
    Node* temp2 = l2.head;
    while(temp1->next != NULL && temp2->next != NULL){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    cout << temp1->data << endl;
    if(temp1->next == NULL){
        temp1->next = temp2;
        return temp2; 
    }else{
        temp2->next = temp1;
        return temp1;
    }
}

int main(){
    List1 l1;
    l1.push_front(7);
    l1.push_front(6);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    printll(l1.head);
    List1 l2;
    l2.push_front(5);
    l2.push_front(4);
    printll(l2.head);
    printll(Linking_2_list(l1, l2)); // Linking the two lists and printing the linked element
    return 0;
}