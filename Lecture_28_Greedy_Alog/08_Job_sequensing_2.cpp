#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Job{
    public:
    int idx;
    int deadline;
    int profit;
    Job(int idx,int deadline,int profit){
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};
int Jobscquencing(vector<pair<int,int>> pairs){
    int n = pairs.size();
    vector<Job> jobs;
    
    for(int i = 0; i < n ; i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);
    }
    sort(jobs.begin(),jobs.end(),[](Job &a,Job &b){
        return a.profit > b.profit;
    });

    cout <<"Selected_job "<< jobs[0].idx << endl;
    int profit = jobs[0].profit;
    int safetime = 2;

    for(int i = 1 ; i < n ; i++){
        if(jobs[i].deadline >= safetime){
            cout << "Selected_job "<< jobs[i].idx << endl;
            profit += jobs[i].profit; 
            safetime++;
        }
    }
    return profit;
}

int main(){
    vector<pair<int,int>> jobs(4,make_pair(0,0));
    jobs[0] = {4,40};
    jobs[1] = {1,10};
    jobs[2] = {1,40};
    jobs[3] = {1,30};
    cout << "Maximum profit: " << Jobscquencing(jobs) << endl;
    return 0;
}