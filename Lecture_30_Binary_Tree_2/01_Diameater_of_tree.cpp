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
int Height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = Height(root->left);
    int rightHt = Height(root->right);
    return max(leftHt, rightHt) + 1;
}

int Diameter(Node* root)
{
    if(root == NULL){
        return 0;
    }
    int currDiam = Height(root->left) + Height(root->right) + 1;
    int leftdiam = Diameter(root->left);
    int rightdiam = Diameter(root->right);

    return max(currDiam , max(leftdiam, rightdiam));
}
pair<int,int> diam(Node* root){


    pair<int,int> leftinfo = diam(root->left);
    pair<int,int> rightinfo = diam(root->right);

    int currentdia = leftinfo.second + rightinfo.second + 1;
    int maxdia = max(currentdia, max(leftinfo.first, rightinfo.first));
    int height = max(leftinfo.second, rightinfo.second) + 1;
    return {maxdia, height};
}
int main(){
    vector<int> nods = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = Binary_Tree(nods);

    // cout << "Root Node: " << root->data << endl;
    // cout << "Height of Tree: " << Height(root) << endl;
    // cout << "Diameter of Tree: " << Diameter(root) << endl;
    cout << "Diameter of Tree: " << diam(root).first << endl;
    return 0;
}