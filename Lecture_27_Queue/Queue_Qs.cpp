#include<iostream>
#include<vector>

using namespace std;

int timeRequired(vector<int> &tickets, int k){
    int time = 0;
    int i = 0;
    while(!(tickets[k] == 0)){
        if(i >= tickets.size()){
            i = 0;
        }
        tickets[i]--;
        time++;
        i++;
}
    return time;
}
int main(){
    vector<int> tickets = {2 , 3 , 2};
    int k = 3;
    cout << timeRequired(tickets, k) << endl;
    return 0;
}