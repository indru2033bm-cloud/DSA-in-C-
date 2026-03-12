#include<iostream>

using namespace std;
class Complex{
    private:
      int real;
      int imag;
    public:
    Complex(int r ,int i){
        real = r;
        imag = i;
    }
    void showNum(){
        cout << real << " + " << imag << "i" << endl;
    }
    int operator + (Complex &obj){
        int resreal = real + obj.real;
        int resimag = imag + obj.imag;
        Complex c3(resreal , resimag);
        c3.showNum();
    
    }
    int operator - (Complex &obj){
        int resreal = real - obj.real;
        int resimag = imag - obj.imag;
        Complex c3(resreal , resimag);
        c3.showNum();
    
    }
};
int main(){
Complex c1(1 ,2);
Complex c2(3 ,4);
c1.showNum();
c2.showNum();
 c1 + c2;
cout << "\n";
c1 - c2;
return 0;
}