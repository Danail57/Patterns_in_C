// Pascal's Triangle
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";

        int coeff = 1;
        for (int k = 0; k <= i; k++)
        {
            cout << coeff << " ";
            coeff = coeff * (i - k) / (k + 1);
        }
        cout << endl;
    }
    return 0;
}
