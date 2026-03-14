#include<iostream>
#include<vector>

using namespace std;
int Firstoccer(vector<int> arr , int i , int target){
    if(i == arr.size()){return -1;}
    if(arr[i] == target){return i;}

    return Firstoccer(arr ,i + 1 ,target);
}
int main(){
    vector<int> arr = {1 ,2 ,3 ,3 ,3 ,4};
    cout << Firstoccer(arr , 0 , 3) << endl;;
    return 0;
}