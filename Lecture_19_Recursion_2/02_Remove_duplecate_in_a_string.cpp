#include<iostream>
#include<string>
using namespace std;
void RemoveDuplect(string str , string ans ,int i ,int map[26]){
    if(i == str.size()){
        cout << "ans: " << ans << endl;
        return ;
    }
    char ch = str[i];
    int mapindx = (int)(ch - 'a');
    if(map[mapindx]){
        RemoveDuplect(str , ans , i+1 ,map);}
    else{
        map[mapindx] = true;
        RemoveDuplect(str , ans + str[i] ,i+1 , map);
    }
}
int main(){
string str = "indrajith";
string ans = "";
int map[26] = {false};
RemoveDuplect(str , ans , 0 ,map);
return 0;
}