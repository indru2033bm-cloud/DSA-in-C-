#include<iostream>

using namespace std;

void reversing(char *word , int n){
    int st = 0 , end = n -1;
    while(st < end){
     swap(word[st++],word[end--]);
    }
}

int main(){
    char word[] = "Indrajith";
    int n = sizeof(word) / sizeof(char);
    reversing(word , n-1);
    cout <<word<<endl;
}