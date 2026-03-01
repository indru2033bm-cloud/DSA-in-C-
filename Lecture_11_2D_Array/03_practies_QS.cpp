#include<iostream>

using namespace std;
void transpose(int t1[][3] , int n ,int m){
    int t2[50][50] = {};
    for(int i = 0 ;i < n ;i++){
        for(int j = 0 ; j < m ; j++){
           t2[j][i] = t1[i][j];
        }
    }
    for(int i = 0; i < m ;i++){
        for(int j = 0; j < n ;j++){
            cout<< t2[i][j] <<" ";
        }
        cout <<endl;
    }
}

int main(){
    int t[2][3] = {{1 ,2 ,3},{4 ,5 ,6}};

    transpose(t , 2 ,3);
}