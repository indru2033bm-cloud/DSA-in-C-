#include<iostream>
#include<vector>
using namespace std;
void PrintBoard(vector<vector<char>> board){
    int n = board.size();
    for(int i = 0 ; i < n ;i++){
        for(int j = 0;j < n; j++){
            cout << board[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << "------------------\n";
}

bool Issafe(vector<vector<char>> board,int row,int col ){
    int n = board.size();
    //Horizontal
    for( int j = 0 ; j < n ; j++){
        if(board[row][j] == 'Q'){
            return false;
        }
    }
    //Vertical
    for(int i = 0 ; i < row;i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    //Digonal left
    for(int i = row, j = col;i >= 0 && j >= 0;i--,j--){
        if(board[i][j] ==  'Q'){
            return false;
        }
    }
    //Digonal right
    for(int i = row ,j = col;i>=0 && j < n;i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}

int NQueen(vector<vector<char>> board , int row){
    int n = board.size();
    if(row == n){
    // PrintBoard(board);
        return 1;
    }
    int count = 0;
    for(int j = 0 ; j < n ; j++){
        if(Issafe(board , row ,j)){
            board[row][j] = 'Q';
            count += NQueen(board , row + 1);
            board[row][j] = '.';
        }
    }
    return count;
}

int main(){
    vector<vector<char>> board;
    int n = 10;
    for(int i = 0 ; i < n ; i++){
        vector<char> Newrow;
        for(int j = 0 ; j < n ; j++){
            Newrow.push_back('.');
        }
        board.push_back(Newrow);
    }
    int count = NQueen(board , 0);
    cout << "Count: "<< count << endl;
    return 0;

}