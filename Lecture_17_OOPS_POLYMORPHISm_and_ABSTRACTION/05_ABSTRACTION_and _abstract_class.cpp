#include<iostream>

using namespace std;
class Shap{
    public:
    virtual void draw() = 0; 
};
class Circle : public Shap{
    public:
    void draw(){
        cout << "Draw Circle" << "\n";
    }
};
class Squre : public Shap{
    public:
    void draw(){
        cout << "Draw Squre" << "\n";
    }
};
int main(){
Squre sq1;
sq1.draw();

cout <<"\n";
Circle cr1;
cr1.draw();

}