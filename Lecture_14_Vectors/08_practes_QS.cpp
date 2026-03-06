#include<iostream>
#include<vector>

using namespace std;
vector<int> mis_mach(vector<int> nums){
    int n = nums.size();
    vector<int> freq( n +1 ,0);
    vector<int> ans;
    for(int i = 0 ; i < nums.size() ; i++){
        freq[nums[i]]++;
    }
    for(int i = 1 ; i <= freq.size() ; i++){
        if(freq[i] == 1){
            continue;
        }else if(freq[i] == 2){
            ans.push_back(i);
        }else{
            ans.push_back(i);
        }

    }
return ans;
}

int main(){
vector<int> vec = {1, 3 ,3};
vector<int> ans = mis_mach(vec);
cout << ans[0] <<" , " << ans[1]<<endl;
}