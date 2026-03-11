#include<iostream>

using namespace std;
class Animal{
    public:
      string colour;
    void eat(){
        cout << "eats..\n";
    }
    void breaths(){
        cout << "breaths..\n";
    }
};

class Fish : public Animal{
    public:
    int fins;
    void swim(){
        cout << "Swim.. \n";
    }
};

int main(){
 Fish f1;
 f1.fins = 4;
 f1.eat();
 f1.breaths();
 f1.swim();
 return 0;
}