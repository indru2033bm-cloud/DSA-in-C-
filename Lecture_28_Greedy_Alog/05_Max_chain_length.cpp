#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second < p2.second;
}
void maxChainLength(vector<pair<int,int>> pairs){
    int n = pairs.size();
    sort(pairs.begin(),pairs.end(),compare);

    int ans = 1;
    int currend = pairs[0].second;
    for(int i = 1 ; i < n ; i++){
        if(pairs[i].first > currend){
            ans++;
            currend = pairs[i].second;
        }
    }
    cout << "Maximum length of chain = " << ans << endl;
}
int main(){
    vector<pair<int,int>> pairs(5,make_pair(0,0));
    pairs[0] = {5,24};
    pairs[1] = {39,60};
    pairs[2] = {5,28};
    pairs[3] = {27,40};
    pairs[4] = {50,90};
    maxChainLength(pairs);
    return 0;
}