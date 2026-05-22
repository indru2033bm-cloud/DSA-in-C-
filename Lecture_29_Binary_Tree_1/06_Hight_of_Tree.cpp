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
int Height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = Height(root->left);
    int rightHt = Height(root->right);
    return max(leftHt, rightHt) + 1;
}
void printtree(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    printtree(root->left);
    printtree(root->right);
}

int main(){
    vector<int> nods = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> node = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root = Binary_Tree(nods);
    Node* root1 = Binary_Tree(node);
    printtree(root1);
    cout << endl;

    // cout << "Root Node: " << root->data << endl;
    cout << "Height of Tree: " << Height(root) << endl;
    cout << "Height of Tree1: " << Height(root1) << endl;
    return 0;
}