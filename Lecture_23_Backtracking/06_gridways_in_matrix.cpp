#include<iostream>

using namespace std;
int gridWay(int r , int c ,int n ,int m){
    if(r == n && c == m){return 1;}
    if(r >= m || c >= n){return 0;}
    int val1 = gridWay(r , c + 1, n ,m);
    int val2 = gridWay(r+1 , c , n ,m);

    return val1 + val2;
}
int msin(){
    int n = 3;
    int m = 3;
    cout << gridWay(0 , 0 , n , m);
    return 0;
}