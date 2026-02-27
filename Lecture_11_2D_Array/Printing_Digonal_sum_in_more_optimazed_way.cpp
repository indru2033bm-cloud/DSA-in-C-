#include<iostream>

using namespace std;
int Diginal_sum(int mat[][3] ,int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += mat[i][i];
        if(i != n - i - 1){
            sum += mat[i][n - i - 1];
        }
    }
    return sum;
}

int main(){
    int matrix[3][3] = {{1 ,2 ,3 } ,{4 ,5 ,6 } ,{7 , 8 ,9}};
    cout <<Diginal_sum(matrix , 4) << endl;


}