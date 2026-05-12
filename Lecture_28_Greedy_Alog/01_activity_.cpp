#include<iostream>
#include<vector>
#include<string>

using namespace std;

int maxActivities(vector<int> start , vector<int> end){
    int n = start.size();
    int count = 1;
    int currentend = end[0];
    for(int i = 1 ; i < n ; i++){
        if(start[i] >= currentend){
            count++;
            currentend = end[i];
        }
    }
    return count;
}

int main(){
    vector<int> start = {1 , 3 , 0 , 5 , 8 , 5};
    vector<int> end = {2 ,4 , 6 , 7 , 9 , 9};

    cout << maxActivities(start,end)<<endl;
    return 0;
}