#include<iostream>

using namespace std;
class Animal{
    public:
      string name;
    void eats(){
        cout << "Eats..\n";
    }
    void breath(){
        cout <<"breathes.. \n";
    }
};

class Fish : public Animal{
    public:
      int fins;
    void swim(){

    }
};

int main(){

}