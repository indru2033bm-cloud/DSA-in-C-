#include<iostream>

using namespace std;
class Print{
    public:
        int show(int s){
            cout << "int : "<< s << "\n";
        }
        void show(string s){
            cout << "String : " << s << endl;
        }
};
int main(){
    Print obj1;
    obj1.show(3);
    obj1.show("Indrajith");
    return 0;
}