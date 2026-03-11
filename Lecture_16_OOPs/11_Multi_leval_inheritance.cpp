#include<iostream>

using namespace std;
class Animal{
    public:
      void eat(){
        cout << " eats..\n";
      }
      void breaths(){
        cout << "breathes..\n";
      }
};

class Mammals: public Animal{
    public :
      string bloodtype;
      Mammals(){
         bloodtype = "Warm";
      }
};

class Dog : public Mammals{
    public:
      void tailswing(){
        cout << "Dog swing it tail \n";
      }
};

int main(){
    Dog d1;

    d1.tailswing();
    d1.breaths();
    d1.eat();

    cout << d1.bloodtype <<endl;
 return 0;

}