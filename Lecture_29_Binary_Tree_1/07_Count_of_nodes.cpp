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
    Node* currentnode = new Node(node[idx]);
    currentnode->left = Binary_Tree(node);
    currentnode->right = Binary_Tree(node);
    return currentnode;
}

int countofnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftcount = countofnodes(root->left);
    int rightcount = countofnodes(root->right);
    return leftcount + rightcount + 1;
}

int main(){
    vector<int> nods = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = Binary_Tree(nods);
    cout << "Count of nodes: " << countofnodes(root) << endl;
    return 0;
}