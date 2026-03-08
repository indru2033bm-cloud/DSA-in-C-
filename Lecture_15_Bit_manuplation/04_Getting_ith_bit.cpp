#include<iostream>

using namespace std;
int Getithbit( int num,int i ){
    int marke = 1<<i;
    if(!(num & marke)) {return 0;}
    else{return 1;}
}
int main(){
cout << Getithbit(10 , 3) <<endl;
cout << Getithbit(7 , 3) <<endl;

}