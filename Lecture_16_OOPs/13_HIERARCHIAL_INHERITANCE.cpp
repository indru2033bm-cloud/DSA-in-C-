#include<iostream>

using namespace std;

class Animal{
    public:
      void eat(){
        cout <<"eats" << endl;
      }
      void breath(){
        cout << "Breath \n" ; 
      }
};

class Birds : public Animal{
    public:
        void fly(){
            cout << "flying.. \n"; 
        }
};

class Fish : public Animal{
    public:
       void swim(){
        cout << "Swiming..\n";
       }
};

class Mammals : public Animal{
    public:
        void walk(){
            cout << "Walks..\n";
        }
};

int main(){
    Mammals m1;
    m1.eat();
    m1.breath();
    m1.walk();

    Fish f1;
    f1.eat();
    f1.breath();
    f1.swim();

    Birds b1;
    b1.eat();
    b1.breath();
    b1.fly();

    return 0;
}