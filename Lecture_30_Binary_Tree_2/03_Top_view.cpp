#include<iostream>
#include<vector>
#include<map>
#include<queue>
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

void Top_view(Node* root){
    queue<pair<Node*,int>> q;
    map<int,int> m;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> curr = q.front();
        q.pop();
        Node* currnode = curr.first;
        int currHD = curr.second;
        if(m.count(currHD) == 0){
            m[currHD] = currnode->data;
        }
        if(currnode->left != NULL){
            pair<Node*,int> left = make_pair(currnode->left,currHD-1);
            q.push(left);
        }
        if(currnode->right != NULL){
            pair<Node*,int> right = make_pair(currnode->right,currHD+1);
            q.push(right);

            }
        }
    for(auto i : m){
        cout<<i.second<<" ";
    }
}
int main(){
    vector<int> nodes = {50, 25, 12, -1, -1, 37, 30, -1, -1, -1, 75, 62, -1, -1, 87, -1, -1};
    Node* root = Binary_Tree(nodes);
    Top_view(root);
    return 0;

}