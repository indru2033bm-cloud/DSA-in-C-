#include<iostream>

using namespace std;
class Student{
string name;
string USN;
float cgpa;
   void getpercentage(float percentage){
    cout << (cgpa * 10) << " %" << endl;
   }
};
class User{
int id;
string username;
string password;
string bio;
  void Deavtivateaccount(){

  }
  void BIO(string newbio){
    bio = newbio;
  }
};

int main(){
Student s1;
User u1;
return 0;
}