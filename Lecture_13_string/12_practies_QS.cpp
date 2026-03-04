#include<iostream>
#include<iostream>

using namespace std;

void find_voles(string str){
    int sum = 0;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
          sum++;
        }
    }
    cout << "Total number of vovals: "<< sum << endl;
}

int main(){
    string str;
    cout << "Enter a string: "<<endl;
    getline(cin , str,'#');

    find_voles(str);
}
