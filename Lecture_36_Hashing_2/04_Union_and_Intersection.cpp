#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void printUnion(vector<int> vec1 ,vector<int> vec2){
    unordered_set<int> s;

    for(int el : vec1){
        s.insert(el);
    }
    for(int el : vec2){
        s.insert(el);
    }

    for(int el : s){
        cout << el << " ";
    }
}

void printintersection(vector<int> vec1 ,vector<int> vec2){
    unordered_set<int> s;

    for(int el : vec1){
        s.insert(el);
    }
    for(int el : vec2){
        if(s.count(el)){
            cout << el << " ";
            s.erase(el);
        }

    }
    cout << endl;
}

int main(){
vector<int> vec1 = {7 ,3 ,9};
vector<int> vec2 = {6 ,3 ,9 ,2 ,9 ,4};

printUnion(vec1 , vec2);
cout << endl;
printintersection(vec1 ,vec2);

return 0;
}