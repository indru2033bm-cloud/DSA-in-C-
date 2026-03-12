#include<iostream>

using namespace std;
class Parent{
    public:
      void show(){
        cout << "Parent Class" << endl;
      }
};
class Child : public Parent {
    public: 
        void show(){
            cout << "Child Class " << endl;
        }
};
int main(){
Child ch1;
ch1.show();
return 0;
}