#include<iostream>

using namespace std;

void sayhello()
{
    cout<< "Hello :)"<<endl;
}

void assistant()
{
    sayhello();
    cout<<"I am assistant "<<endl;
    cout<<"Work is done"<<endl;
}

int main()
{   
    assistant();
    return 0;
}