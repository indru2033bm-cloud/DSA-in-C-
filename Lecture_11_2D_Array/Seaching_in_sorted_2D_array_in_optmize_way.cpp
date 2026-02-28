#include <iostream>

using namespace std;
void search(int mat[][4], int n, int m, int key)
{
    int i = 0, mid;
    for (i = 0; i < n; i++)
    {

        int low = 0, high = m - 1;

        while (low <= high && i < n)
        {

            mid = (high + low) / 2;

            if (key == mat[i][mid])
            {
                cout << i << " , " << mid << endl;
                return ;
            }
            else if (key >= mat[i][mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    cout <<  "Not found "<< endl;
}

int main()
{
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    search(matrix, 4, 4, 50);
}