#include<iostream>

using namespace std;
bool pallendrom(char *word , int n){
    int st = 0 , end = n - 1;
    for(int i = 0; i < n ; i++){
        if(word[st++] != word[end--]){
            cout <<" word is not pallendrom";
            return false;
        }
    }
    cout << "Valed pallendrom";
    return true;
}

int main(){
    char word[] = "racecar";
    int n = sizeof(word) / sizeof(char);
    pallendrom(word , n - 1);

}