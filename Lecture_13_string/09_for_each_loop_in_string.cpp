#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "Apna college";
    // for(int i = 0 ; i < str.length() ;i++){ // when we require the index of string
    //     cout << str[i] << "-";
    // }
    for(char ch : str){ // when we requre the only alphbate of a string
        cout << ch <<" ";
    }
    cout<<endl;
    return 0;
}