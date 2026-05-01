#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int countDistinct(vector<int> vec){
    unordered_set<int> s;

    for(int i = 0 ; i < vec.size() ; i++){
        s.insert(vec[i]);
    }

    return s.size();
}

int main(){
    vector<int> vec = {4 ,3 ,2 ,5 ,6 ,7 ,3 ,4 ,2 ,3 ,9 };

    cout << "Count " << countDistinct(vec);
    return 0;
}
