#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// void printVector(vector<int> v){
//     for(int i = 0 ; i < v.size() ; i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
int MaxareaHistogram(vector<int> heights){
    int n = heights.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    stack<int> s;
    // Next smaller to left
    nsl[0] = -1;
    s.push(0);
    for(int i = 1; i < heights.size() ; i++){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i] = -1;
        }else{
            nsl[i] = s.top();
        }
        s.push(i);
    }
    // printVector(nsl);
    while(!s.empty()){
        s.pop();
    }
    // Next smaller to right
    nsr[n-1] = n;
    s.push(n-1);
    for(int i = n - 1; i >= 0 ; i--){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()] ){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = n;
        }else{
            nsr[i] = s.top();
        }
        s.push(i);
    }
    int maxArea = 0;
    for(int i = 0 ; i < n ;i++){
        int ht = heights[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = ht * width;
        maxArea = max(area , maxArea);
    }
    return maxArea;
}
int main(){
    vector<int> heights = {2 , 1 , 5 , 6 , 2 , 3};
    cout << MaxareaHistogram(heights) << endl;
    return 0;
}