#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool Anogram(string s,string t){

    if (s.length() != t.length()    )
    {
        return false;
    }
    
    unordered_map<char , int> m;

    for(int i = 0 ; i < s.size() ; i++ ){
        if(m.count(s[i])){
            m[s[i]]++;
        }else{
            m[s[i]] = 1;
        }
    }
    for(int i = 0 ; i < t.size() ; i++ ){
        if(m.count(t[i])){
            m[t[i]]--;
        }else{
            return false;
        }
    }
    for(auto i : m){
        if(i.second != 0){
            return false;
        }
    }
    return true;
}