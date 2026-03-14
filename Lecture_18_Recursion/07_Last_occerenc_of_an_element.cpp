#include<iostream>
#include<vector>
using namespace std;
int Lastoccer(vector<int> vec , int i ,int target){
    if(i == vec.size()){return -1;}
    int indxFound = Lastoccer(vec , i + 1 , target);
    if(indxFound == -1 && vec[i] == target){return i;}

    return indxFound;
}
int main(){
vector<int> vec = {1 ,2 ,3,3,3 ,4};
cout << Lastoccer(vec , 0 ,3) <<"\n";
return 0;
}