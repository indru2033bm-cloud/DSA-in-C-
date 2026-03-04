#include<iostream>
#include<iostream>

using namespace std;
 string swaping(string str1 , int n){
     swap(str1[n] ,str1[str1.length() -1 - n]);
     cout << str1[n]<< endl;
    return str1;
 }

int main(){
    string str1 = "bank";
    string str2 = "kanb";
    
    if(str2 == swaping(str1 , 0)){
      cout << "True"<<endl;
    }
    else{
        cout << "False"<< endl;
    }
    return 0;
}