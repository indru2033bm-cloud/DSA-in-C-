#include<iostream>

using namespace std;
void pointer_function(int mat[][4] , int n , int m){
    cout << "Adress of 1st Row: " << mat << endl;
    cout << "Adress of 2st Row: " << (mat + 1) << endl;
    cout << "Adress of 3st Row: " << (mat + 2) << endl;

    cout <<"\n";

    cout << "Value in 1st Row: " << *mat << endl;
    cout << "Value in 2st Row: " << *(mat + 1) << endl;
    cout << "Value in 3st Row: " << *(mat + 2) << endl;

    cout << "\n";

    // To print perticuler elemint we use --> mat[i][j] -- or -- *(*(mat + i) + j)

    cout << *(*(mat + 2) +2) <<endl;


}

int main(){
    int mat[4][4] = {{1 , 2 , 3 , 4},
                    {5 , 6 , 7 , 8},
                    {9 , 10 , 11 , 12},
                    {13 , 14 , 15 , 16}};
    pointer_function(mat , 4 , 4);
}
