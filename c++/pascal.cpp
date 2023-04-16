#include<iostream>
using namespace std;
 
int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << endl;
 
    for (int i = 0; i < rows; i++)
    {
        int coef = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i;j++)
        {
            cout << "      " << coef;
            coef = coef * (i - j) / (j + 1);
            
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}
