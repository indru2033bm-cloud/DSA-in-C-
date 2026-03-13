#include<iostream>

using namespace std;
class Example{
    public:
    Example(){
        cout <<"Constrector.." <<"\n";
    }
    ~Example(){
        cout << "Decstrector.." << "\n";
    }
};

int main(){
    int a= 0 ;
    if ( a == 0){
        static Example obj1;
    }

    cout << "End of programm.." <<"\n";
    return 0;
}