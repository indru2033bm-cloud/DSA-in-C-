#include<iostream>
#include<vector>
using namespace std;
vector<int> index(vector<int> vec){
    int i = 0;
    vector<int> ans;
    for(int j = i + 1 ; j < vec.size() ; j++){
        if(vec[i] == vec[j]){
          ans.push_back(vec[i]);
          ans.push_back(vec[j] + 1);
          
        }
        else if(vec[i] != vec[j]){
            i++;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {1 ,2 ,2 ,4 ,5 ,6 ,7};
    vector<int> ans = index(vec);
    cout << ans[0] <<" , "<< ans[1];
    return 0;

}