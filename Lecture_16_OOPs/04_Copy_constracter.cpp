#include<iostream>
using namespace std;
class Car{
    public:
       string name;
       string colour;
    Car(string name , string colour){
        this->name = name;
        this->colour = colour;
    }

    Car(Car &original){
        name = original.name;
        colour = original.colour;
    }
};

int main(){
    Car c1("Maruthi 800" , "White");
    Car c2(c1);
    cout <<c2.name << "\n";
    cout <<c2.colour << "\n";

}
