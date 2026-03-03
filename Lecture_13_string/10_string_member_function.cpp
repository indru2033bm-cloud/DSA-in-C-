#include<iostream>
#include<iostream>
using namespace std;

int main(){
    string str = "Hello, world!";
    cout << str.length() << endl;
    cout << str.at(5) << endl;
    cout << str[5] << endl;
    cout << str.substr(0 ,13) << endl;
    cout << str.find("l" ,4) <<endl;
}