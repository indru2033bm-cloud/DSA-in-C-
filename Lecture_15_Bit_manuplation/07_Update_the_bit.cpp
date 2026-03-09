#include <iostream>

using namespace std;
int update(int num, int i ,int val){
   num = num & ~(1 << i);
   num = num | (val << i);
   return num;
}


int main()
{
    
    cout << update(7 , 3 , 1) << endl;
    cout << update(6 ,0 , 1) << endl;
    return 0;
}