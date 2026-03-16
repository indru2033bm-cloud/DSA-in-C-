#include<iostream>

using namespace std;
int Frindpair(int n){
    if(n == 1 || n == 2){ return n;}

    return Frindpair(n - 1) + (n - 1) * Frindpair(n - 2);
}
int main(){
cout << Frindpair(4) << endl;
return 0;
}