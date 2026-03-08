#include <iostream>

using namespace std;
int update(int num, int i)
{
    int bitmask = ~(1 << i);
    return (num & bitmask);
}

int main()
{
    cout << update(7 , 3) << endl;
    return 0;
}