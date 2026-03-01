#include<iostream>

using namespace std;
// void count(int mat[][3],int n , int m ,int key){
//     int cout = 0;
// for(int i = 0; i < n ; i++){
//     for(int j = 0; j < m ; j++){
//         if(key == mat[i][j]){
//             cout++;
//         }
//     }
// }
//     cout << cout ;
// }
void count(int mat[][3], int n, int m, int key){
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == key){
                count++;
            }
        }
    }

    cout << count << endl;
}

int main(){
    int mat[2][3] = {{4,7,8},{8,8,7}};
    count(mat , 2 ,3 ,7);

}

