#include<iostream>

using namespace std;
class A{
    public:
    A(){
        printf("Constreacor of A\n" );}
        ~A(){
            cout << "Dectrocter of A\n";
        }
};

class B : public A{
    public:
    B(){
        cout << "Constructer of B\n";
    }
    ~B(){
        cout << "Dcstrector of B\n";
    }
};

int main(){
B obj;
return 0;
}