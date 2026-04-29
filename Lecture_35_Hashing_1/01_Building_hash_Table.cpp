#include<iostream>
#include<string>

using namespace std;

class Node{
    public:
    string key;
    int val;
    Node* next;
    Node(string key , int val){
        this->key = key;
        this->val = val;
        next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable{

    int totalsize;
    int currsize; 
    Node ** table;
    Node* head;

    int hashfunction(string key){
        int idx = 0;

        for(int i = 0 ; i < key.size() ; i++){
            idx = idx + (key[i] * key[i])%totalsize;
        }
        return idx%totalsize;
    }

    void rehash(){
        int oldtotal = totalsize;
        Node** oldtable = table;

        totalsize = 2 * totalsize;
        currsize = 0;
        table = new Node*[totalsize];

        for(int i = 0 ; i < totalsize ; i++){
            table[i] = NULL;
        }
        for(int i = 0 ; i < totalsize ; i++){
            Node* temp = oldtable[i];
            while(temp != NULL){
                insert(temp->key , temp->val);
                temp = temp->next;
            }
            if(oldtable[i] != NULL){
                delete oldtable[i];
            }
        }
        delete oldtable;

    }
    public:
    HashTable(int size){
        totalsize = size;
        currsize = 0;

        table = new Node*[totalsize];

        for(int i = 0 ;i < totalsize ; i++){
            table[i] = NULL;
        }
    }
    void insert(string key ,int val){
        int idx = hashfunction(key);

        Node* newNode = new Node(key , val);
        newNode->next = table[idx];
        table[idx] = newNode;

        currsize++;

        int lambda = currsize / totalsize;
        if(lambda > 1){
            rehash();
        }
    }
    bool exist(string key){
        int idx = hashfunction(key);

        Node* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return true;
            }

            return false;
        }
    }
    int search(string key){
              int idx = hashfunction(key);

        Node* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return temp->val;
            }
            temp = temp->next;
            return -1;
        }

    }
    void remove(string key){
        int idx = hashfunction(key);

        Node* temp = table[idx];
        Node* prev = temp;
        while(temp != NULL){
            if(temp->key == key){
                if(prev == temp){
                    table[idx] = temp->next;
                }else{
                    prev->next = temp->next;
                }
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    void print(){
        for(int i = 0 ; i < totalsize ; i++){
            cout << "idx" << i << "->";
            Node* temp = table[i];
            while(temp != NULL) {
                cout << temp->key << "->" << temp->val << "->";
                temp = temp-> next;
            }
            cout << endl;
        }
    }
};

int main(){
    HashTable ht(6);
    ht.insert("India",150);
    ht.insert("china",150);
    ht.insert("Naple",10);
    ht.insert("US",50);
    ht.insert("UK",30);
    ht.insert("Russia",20);
    ht.insert("Japan",30);
    ht.print();
    cout << "-----------end-------------\n";
    ht.remove("Naple");
    ht.print();
    // if(ht.exist("India")){
    //     cout << "Popualtion of india is:" << ht.search("US") << endl;
    // }else{
    //     cout << "NOt exist \n";
    // }
    return 0;
}