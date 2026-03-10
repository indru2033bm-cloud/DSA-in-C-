#include<iostream>

using namespace std;

class Student{
 string name;
 float cgpa;
 public:
   void setname(string nameval){
    name = nameval;
   }
   void setcgpa(float cgpaval){
    cgpa = cgpaval;
   }

   string getname(){
    return name;
   }
   float getcgpa(){
    return cgpa;
   }
};

int main(){
    Student s1;
    s1.setname("Indrajith H B");
    s1.setcgpa(9.1);
    cout <<s1.getname() << endl;
    cout << s1.getcgpa() << endl;
    return 0;
}