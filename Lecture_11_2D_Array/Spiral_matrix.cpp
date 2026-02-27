#include<iostream>

using namespace std;
void Spitalmatrix(int mat[][5] , int n ,int m){
    int srow = 0 , scol = 0;
    int erow = n - 1 ,ecol = n - 1;
    while(srow <= erow && scol <= ecol){
            //top
    for(int j = scol ; j <= ecol ; j++){
        cout << mat[srow][j] << " ";
    }

    //Right
    for(int i = srow + 1 ; i <= erow ; i++){
        cout << mat[i][ecol] << " ";
    }

    //Bottom
    for(int j = ecol - 1 ; j >= scol ; j--){
        cout << mat[erow][j] << " ";
    }

    //Left
    for(int i = erow - 1 ; i > srow ; i--){
        cout << mat[i][scol] << " ";
    }
    srow++ , scol++;
    erow-- , ecol--;

    }

}

int main(){
    int mataix[4][5] = {{1 ,2 ,3 ,4 ,1 },
                        {5 ,6 ,7 ,8 ,2},
                        {9 ,10 ,11 ,12 ,3},
                        {13 ,14 ,15 ,16 ,4}};

  Spitalmatrix(mataix ,4 ,5);

}