#include<iostream>

using namespace std;

char next_char(char c){
    if(c == 'Z'){return 'a';}
    return c + 1 ;
}

int main(){
    char ch = 'Z';
    cout << next_char(ch) << endl ;
    return 0 ;
}