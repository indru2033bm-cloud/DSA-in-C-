#include<iostream>
#include<vector>

using namespace std;
vector<int> index(vector<int> vec , int tar){
    int n = vec.size();
    int st = 0 , end = n - 1 ;
    vector<int> ans;
    // for(j = 0 ; j < n ; j++){
    //     sum = vec[i] + vec[j];
    //     if(sum == tar){
    //         cout <<"[ " << i << " , "<< j <<" ]" << endl;

    //     }
    //     if(sum > tar && i < n){
    //         i++;
    //     }
    // }
    while(st < end){
      int sum = vec[st] + vec[end];
      if(sum == tar){
        // cout << "[ " << st << " , " << end << " ]" << endl;
        // return ;
        ans.push_back(st);
        ans.push_back(end);
        
      }
      else if(sum > tar){
        end--;
      }
      else{
        st++;
      }
    }
    return ans;
}

int main(){
    vector<int> arr = {6 , 2 , 4 , 7 ,11};

    int target = 9;
    vector<int> ans = index(arr , target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}