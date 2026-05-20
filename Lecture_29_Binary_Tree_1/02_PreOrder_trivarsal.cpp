#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* Binary_Tree(vector<int> node){
    idx++;
    if(node[idx] == -1){
        return NULL;
    }

    Node* currnode = new Node(node[idx]);
    currnode->left = Binary_Tree(node);
    currnode->right = Binary_Tree(node);
    return currnode;
}

void preorder(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> nods = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = Binary_Tree(nods);
    cout << "Root Node: " << root->data << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    return 0;
}