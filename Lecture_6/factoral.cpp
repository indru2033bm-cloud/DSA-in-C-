#include<iostream>
using namespace std;

int factoral(int a){
    if (( a == 0) || (a == 1)){
        return 1;
    }
    else{
        int fact = 1;
        for ( int i = 2; i <= a ; i++ ){
            fact *= i ;
        }
        return fact ;
    }
}

int main(){
    cout<<factoral(9)<<endl;
    return 0;
}