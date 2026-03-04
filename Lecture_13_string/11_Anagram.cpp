#include<iostream>
#include<string>

using namespace std;
bool anagram(string str1 ,string str2){
    if(str1.length() != str2.length()){
        cout << "Not a valed anagram"<<endl;
        return false;
    }
    int count[26] ={0};
    for(int i = 0 ; i < str1.length() ; i++){
       count[str1[i] - 'a']++;
    }

    for(int i = 0; i < str2.length() ;i++){
        if(count[str2[i] - 'a'] == 0){
            cout << "Not a valed anagram";
            return false;
        }
        count[str2[i] - 'a']--;
    }
    cout << "Valed anagram"<< "\n";
    return true;
}

int main(){
    string str1 = "anegram";
    string str2 = "nagaram";
    anagram(str1 ,str2);

}