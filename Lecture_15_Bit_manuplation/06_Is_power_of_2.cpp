#include<iostream>

using namespace std;
int IsPowerOf2(int num){
    if(!(num & (num - 1))) {return true;}
    else{return false;}
}

int main(){
cout <<IsPowerOf2(6)<<endl;
cout <<IsPowerOf2(12) << endl;
cout <<IsPowerOf2(16)<< endl;
cout <<IsPowerOf2(8)<<endl;
return 0;
}