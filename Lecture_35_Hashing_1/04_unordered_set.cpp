#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);

    if(s.find(3) != s.end()){
        cout << "3 is exist\n";
    }else{
        cout << "3 doesn't exist\n";
    }

    s.erase(3);
    for(auto p : s){
        cout << p << " ";
    }
    return 0;
}