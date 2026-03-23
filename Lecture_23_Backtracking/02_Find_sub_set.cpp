#include<iostream>

using namespace std;
void Printsubset(string str , string subset){
    if(str.size() == 0){cout << subset<<"\n";return ;}
    char ch = str[0];

    //Yes choice
    Printsubset(str.substr(1 , str.size()-1),subset + ch);

    //No choice 
    Printsubset(str.substr(1 , str.size()-1),subset);
}

int main(){
    string str = "abcd";
    string subset = "";
    Printsubset(str , subset);
    return 0;
}