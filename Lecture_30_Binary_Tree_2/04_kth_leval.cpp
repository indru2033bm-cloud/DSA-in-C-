#include<iostream>
#include<vector>
#include<algorithm>
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
void K_helper(Node* root,int k ,int l){
    if(root == NULL){
        return;
    }
    if(l == k){
        cout << root->data<<" ";
        return;
    }
    K_helper(root->left,k,l+1);
    K_helper(root->right,k,l+1);
}
void Kth_leval(Node* root,int k){
    K_helper(root,k,1);
}
int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = Binary_Tree(nodes);
    Kth_leval(root, 2);
}