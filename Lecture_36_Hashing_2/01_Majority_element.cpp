#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void majorityElement(vector<int> &nums){
    unordered_map<int , int> m;

    for(int i = 0 ; i < nums.size() ; i++ ){
        if(m.count(nums[i])){
            m[nums[i]]++;
        }else{
            m[nums[i]] = 1;
        }
    }
    for(auto i : m){
        if(i.second > nums.size()/2){
            cout << i.first;
        }
    }
     // No majority element found
}

int main()
{
    vector<int> nums = {1 , 2 , 2 ,1 ,2 , 1 , 1};

    majorityElement(nums);
    return 0;
}