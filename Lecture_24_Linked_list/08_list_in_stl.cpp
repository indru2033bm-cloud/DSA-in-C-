#include<iostream>
#include<list>
#include<iterator>

using namespace std;
 void Printlist(list<int> ll){
    list<int> ::iterator itr;
    for(itr = ll.begin(); itr != ll.end() ;itr++){
        cout << *itr << " -> ";

    }
    cout << "NULL\n";
 }
int main(){
    list<int> ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    Printlist(ll);
    cout << "head :" << ll.front() << endl;
    cout << "tail :" << ll.back() << endl;
    cout << "Size of List is "<< ll.size() << endl;
    ll.pop_back();
    cout << "After pop back\n";
    Printlist(ll);
    cout << "Size of List is "<< ll.size() << endl;
    cout << "head :" << ll.front() << endl;
    cout << "tail :" << ll.back() << endl;
    return 0;

}