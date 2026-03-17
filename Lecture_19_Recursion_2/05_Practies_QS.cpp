#include<iostream>

using namespace std;
int Binary_scearch(int arr[],int key,int st ,int end , int n){
    int mid = (st + end) / 2;
    if(arr[mid] == key ){
        return mid;
    }
    if (arr[mid] < key){
        return Binary_scearch(arr , key ,st = mid + 1,end , n);
    }else{
        return Binary_scearch(arr ,key ,st,end = mid - 1,n );
    }
}
int main(){
int arr[7] = {1 ,2 ,3 ,4 ,5 ,6 ,7};
int key = 7;
int st = 0 , end = 7 - 1;
cout << Binary_scearch(arr , key , st ,end ,7);
return 0;
}