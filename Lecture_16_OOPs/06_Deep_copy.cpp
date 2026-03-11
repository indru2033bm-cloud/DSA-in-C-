#include<iostream>

using namespace std;
class Car{
    public:
       string name;
       string colour;
       int *miliage;
    Car(string name , string colour){
        this->name = name;
        this->colour = colour;
        miliage = new int;
        *miliage = 12;
    }
    Car(Car &original){ //Deep copy constructer
        name = original.name;
        colour=original.colour;
        miliage = new int ;
        *miliage = *original.miliage;
    }
};
int main(){
Car c1("Roles Rayes" , "White");

Car c2(c1);
cout << c2.name << "\n";
cout << c2.colour << "\n";
cout << *c2.miliage << "\n";

*c2.miliage = 10; //From this we come to know Pointers in constructor usees danymic memory allocation in case of constrector

cout << *c1.miliage <<endl;
}