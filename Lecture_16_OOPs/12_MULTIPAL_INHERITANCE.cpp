#include<iostream>

using namespace std;
class Teacher{
    public:
       float salary;
       string subject;

};

class Student{
    public:
      string rollno;
      float cgpa;
};

class TA: public Teacher , public Student{
 public:
 string research;
};

int main(){
  TA ta1;

  ta1.cgpa = 9.0;
  ta1.rollno = "cs12309";
  ta1.research = "QLED and OLED";

  cout << ta1.cgpa <<"\n";
  cout << ta1.rollno <<"\n";
  cout << ta1.research <<"\n";
  return 0 ;
}