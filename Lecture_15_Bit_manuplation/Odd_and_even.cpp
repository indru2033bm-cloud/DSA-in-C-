#include<iostream>

using namespace std;
void evenoreven(int n){
    if(!(n & 1)){
        cout << "Even"<<endl;
    }else{
        cout << "Odd" <<endl;
    }

}

int main(){
evenoreven(4);
evenoreven(7);
return 0;
}