#include<iostream>

using namespace std;
int Diginal_sum(int mat[][3] ,int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += mat[i][i];
        // if(i != n - i - 1){ // If We remove the condution it will not effect the even rows and colume EX:- 4 X 4 !But in case of odd number it effects so we require it
         sum += mat[i][n - i - 1];
        // }
    }
    return sum;
}

int main(){
      int matrix[3][3] = {{1 ,2 ,3 },
                           {4 ,5 ,6 },
                           {7 , 8 ,9}};

    cout << Diginal_sum(matrix , 3) << endl;
}