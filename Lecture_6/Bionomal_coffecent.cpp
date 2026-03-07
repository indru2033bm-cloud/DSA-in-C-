#include<iostream>

using namespace std;

int factoral(int a){
    int fact = 1 ;
    if (a == 0 || a == 1 ){
        return 1;
    }
    for ( int i = 2 ; i <= a ; i++){
         fact *= i ;
    }
    return fact ;
}

int bionomal(int n ,int r){
    int val1 = factoral(n);
    int val2 = factoral(r);
    int val3 = factoral(n-r);
    int result = val1 / (val2 * val3);
    return result ;
}
//
// ionamal_coffecent =    n! / r! * (n - r)!
//                       
//

int main(){
    cout << bionomal(10 , 3) << endl;
    return 0;
}