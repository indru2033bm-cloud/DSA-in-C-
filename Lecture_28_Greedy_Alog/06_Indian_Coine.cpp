#include<iostream>
#include<vector>
using namespace std;

int mincoins(vector<int> coins , int v){
    int n = coins.size();
    int ans = 0;
    for(int i = n ; i >= 0 && v > 0 ; i--){
        if(v >= coins[i]){
            ans += v/coins[i];
            v = v%coins[i];
        }
    }
    return ans;
}
int main(){
    vector<int> coins = {1,2,5,10,20,50,100,200,500,2000};
    int V = 1790;
    cout << "Min no of coins required = "<< mincoins(coins,V) << endl;
    return 0;
}