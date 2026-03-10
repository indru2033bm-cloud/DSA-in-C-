#include<iostream>

using namespace std;
void range(int num ,int i ,int j){
    while( j > 0){
        int BitMask = ~(1 << i);
        num = num & BitMask;
        j--;
        i++;
    }
    cout << num << endl;
}
int main(){

    range(31 , 1 ,3);
return 0;

}