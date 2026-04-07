#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        
            next = NULL;
        
    }
};

class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = tail = NULL;
    }
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
};
void printll(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL\n";
}
Node *SplitATmid(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
    }
    return slow; // slow is the head of right half
}

Node *merge(Node *left, Node *right)
{
    List ans;
    Node *i = left;
    Node *j = right;
    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        else
        {
            ans.push_back(j->data);
            j = j->next;
        }
    }
    while (i != NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }
    while (j != NULL)
    {
        ans.push_back(j->data);
        j = j->next;
    }
    return ans.head;
}
Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rightHead = SplitATmid(head);
    Node *left = mergeSort(head);       // left half
    Node *right = mergeSort(rightHead); // right half

    return merge(left, right);
}
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    printll(ll.head);
    ll.head = mergeSort(ll.head);
    printll(ll.head);
    return 0;
}