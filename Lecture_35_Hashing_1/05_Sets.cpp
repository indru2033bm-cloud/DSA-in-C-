#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[7] = {1 ,2 ,7 ,11 ,15 ,5 ,9 };
    int n = 7;
    int target = 3;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        int rem = target - arr[i];
        if(m.count(rem)){
            cout << "Pair found: " << m[rem] << " , " << i << endl;
            break;
        }
        m[arr[i]] = i;
    }
    return 0;
}