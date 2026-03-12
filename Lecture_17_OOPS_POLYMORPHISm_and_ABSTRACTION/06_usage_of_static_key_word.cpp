#include<iostream>

using namespace std;

class Example{
    public:
    int static x;
};

int Example :: x = 0;


int main(){
  Example eg1;
  Example eg2;
  Example eg3;

cout << eg1.x++ << "\n";
cout << eg2.x++ << "\n";
cout << eg3.x++ << "\n";

  return 0;
}