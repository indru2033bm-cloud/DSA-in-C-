#include<iostream>

using namespace std;

char toupper(char *word , int n){
    for(int i= 0 ; i < n ; i++){
        char ch = word[i];
        if( ch >= 'A' && ch <= 'Z'){
            continue;
        }else{
            word[i] = ch - 'a' + 'A';
        }

    }
}

int main(){
    char word[] = "ApPle";
    int n = sizeof(word) / sizeof(char);
    toupper(word , n - 1);
    cout << word << endl;
    return 0;
}