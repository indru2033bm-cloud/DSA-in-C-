#include<iostream>

using namespace std;

class BankAccount{
    private:
      int Acountno;
      int Balence = 100000;
    public:
    int deposit;
        void Setdeposit(int deposit ){
            Balence += deposit;
        }
        void Setwithodral(int withdraw){
            Balence -= withdraw;
        }
        int Getbalence(){
            return Balence;
        }
};

int main(){
    BankAccount cost1;
    cost1.Setdeposit(200000);
    cost1.Setwithodral(200500);

    cout << "Remaining balence: " << cost1.Getbalence() << endl;
    return 0;
}