#include<iostream>

using namespace std;

class Car{
    public :
    string name;
    string colour;
    int *milage;
    Car(string name , string colour){
        this->name = name;
        this->colour = colour;
        milage = new int;
        *milage = 12;
    }
    Car(Car &original){
        name = original.name;
        colour = original.colour;
        milage = new int ;
        *milage = *original.milage;
    }
    ~Car(){
        cout << "Deliting..." <<"\n";
        if(milage != NULL){
            delete milage;
            milage = NULL;
        }
    }
};

int main(){
    Car c1("Indrajith H B" , "White");
    // Car c2(c1);
    cout << c1.name << "\n";
    cout << c1.colour<< "\n";
    cout << *c1.milage << "\n";
    return 0;

}