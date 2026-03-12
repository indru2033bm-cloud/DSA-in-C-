#include<iostream>

using namespace std;
class Parent{
    public:
    virtual void hello(){
        cout << "Hello every one"<< "\n";
    }
};
class Child : public Parent{
    public:
    void hello(){
        cout << "Hello to child" <<"\n";
    }
};
int main(){
Child ch1;
Parent *prt;

prt = &ch1;
prt->hello();
return 0;
}