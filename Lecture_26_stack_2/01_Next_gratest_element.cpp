#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextGreaterElement(vector<int> &arr , vector<int> &ans){
    stack<int> s;
    int Idx = arr.size() - 1;
    ans[Idx] = -1;
    s.push(arr[Idx]);
    for(Idx = Idx - 1 ; Idx >= 0 ;Idx--){
        while(!s.empty() && arr[Idx] >= s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[Idx] = -1;
        }else{
            ans[Idx] = s.top();
        }
        s.push(arr[Idx]);
    }

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1 , 3 , 0 , 2 , 4 };
    vector<int> ans(arr.size());
    nextGreaterElement(arr , ans);
    return 0;
}