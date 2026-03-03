#include<iostream>

using namespace std;

int main(){
    char str[5];
    cin.getline(str , 300 , '*');
    cout <<"Your string is: "<< str << endl;
    return 0;
}