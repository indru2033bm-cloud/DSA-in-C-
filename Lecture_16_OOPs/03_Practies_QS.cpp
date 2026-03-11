#include <iostream>

using namespace std;
class User
{
    int id;
    string password;

public:
    string username;
    User(int id) {
        this->id = id;
    }

    void Setpassword(string password){
        this->password = password;
    }

    string Getpassword(){
        return password;
    }

    int Getid(){
        return id;
    }
};
int main(){
    User c1(123);
    c1.username = "Indrajith H B";
    c1.Setpassword("Indrajith@234");
    cout << "User name : " << c1.username <<endl;
    cout << "User password : "<< c1.Getpassword() << endl;
    cout << "User Id : " << c1.Getid() << endl;
    return 0;
}