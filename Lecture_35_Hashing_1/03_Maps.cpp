#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    map<string , int > m;

    m["India"] = 150;
    m["China"] = 150;
    m["Russia"] = 20;
    m["Japan"] = 30;
    m["US"] =100;
    

    for(auto p : m){
        cout << p.first << "->" << p.second << endl;
    }

    m.erase("China");

    if(m.count("China")){
        cout << "China is present\n";
    }else{
        cout << "China is not present\n";
    }
    return 0;
}