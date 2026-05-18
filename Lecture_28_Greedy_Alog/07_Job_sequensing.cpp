#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second > p2.second; 
}

int maxprofit(vector<pair<int,int>> jobs){
    int n = jobs.size();
    sort(jobs.begin(),jobs.end(),compare);
    int ans = jobs[0].second;
    int safetime = 2;
    for(int i = 1 ; i < n ; i++){
        if(jobs[i].first >= safetime){
            ans += jobs[i].second; 
            safetime++;
        }
    }
    return ans;
}
int main(){
    vector<pair<int,int>> jobs(4,make_pair(0,0));
    jobs[0] = {4,40};
    jobs[1] = {1,10};
    jobs[2] = {1,40};
    jobs[3] = {1,30};
    cout << "Maximum profit = " << maxprofit(jobs) << endl;
    return 0;
}