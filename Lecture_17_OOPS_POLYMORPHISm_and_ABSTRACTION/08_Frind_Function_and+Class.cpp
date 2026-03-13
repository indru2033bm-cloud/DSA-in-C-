#include<iostream>

using namespace std;
class A{
string secret = "Secret Data";
friend class B;
friend void Secreat(A &obj);
};

class B{
    public:
    void secret(A &obj){
        cout << obj.secret << endl;
    }
};

void Secreat(A &obj){
    cout << obj.secret << endl;
}

int main(){
A a1;
B b1;
b1.secret(a1);
cout <<"\n";
Secreat(a1);
return 0;
}