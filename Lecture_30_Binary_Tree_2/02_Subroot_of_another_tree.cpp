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
bool isIdentical(Node* root1,Node* root2){

    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }

    if(root1->data != root2->data){
        return false;
    }
    isIdentical(root1->left,root2->left);
    isIdentical(root1->right,root2->right);
    
}

bool issubtree(Node* root, Node* subroot){
    if(root == NULL && subroot == NULL){
        return true;
    }
    if(root == NULL || subroot == NULL){
        return false;
    }
    if(root->data == subroot->data){
        if(isIdentical(root,subroot)){
            return true;
        }
}
int isleftsubtree = issubtree(root->left, subroot);
if(!isleftsubtree){
    return issubtree(root->right, subroot);
}
return true;
}
int main(){
    vector<int> nods = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = Binary_Tree(nods);

    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    // subroot->right = new Node(5);
    cout << issubtree(root,subroot)<< endl;
    return 0;
}