#include<iostream>

using namespace std;

char next_char(char c){
    return c + 1 ;
}

int main(){
    char ch = 'Z';
    cout << next_char(ch) << endl ;
    return 0 ;
}