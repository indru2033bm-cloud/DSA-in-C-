#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> first = {0 , 1 ,2};
    vector<int> end = {9 , 2 , 4};

    vector<pair<int,int>> act(3,make_pair(0,0));
    for(int i = 0 ; i < act.size() ; i++){
        act[i].first = first[i];
        act[i].second = end[i];
    }

    for(int i = 0 ; i < act.size() ; i++){
        cout << act[i].first << "," << act[i].second << endl;
    }

    return 0;
}
