#include<iostream>
using namespace std;

void tolower(char *word , int n){

    for(int i = 0 ; i < n ; i++){
        char ch = word[i];
        if(ch >= 'a' && ch <='z'){
            continue;
        }
        else{
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main(){
    char word[] = "ApPlE";
    int n = sizeof(word) / sizeof(char);
     tolower(word , n -1);
    cout << word <<endl;
}