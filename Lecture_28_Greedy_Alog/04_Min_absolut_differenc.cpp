#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> A = {4,1,8,7};
    vector<int> B = {2,3,6,5};
    int n = A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans += abs(A[i] - B[i]);
    }
    cout << "Min Absolute Difference = " << ans << endl;
    return 0;
}