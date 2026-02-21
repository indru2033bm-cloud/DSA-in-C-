#include<iostream>

using namespace std;

void fuc(int ar[]){
    ar[1] = 1234;


}

int main(){
int arr[5] = {1,2,3,4,5};
cout << arr <<endl; // Prints addres of first element of array
cout << arr + 1 << endl ; //Prints addres of second element of arrya
fuc(arr);
cout << arr[1] <<endl;

}