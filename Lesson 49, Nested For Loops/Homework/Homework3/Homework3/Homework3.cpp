#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 11; i++)
    {
        for (int j = 1; j + i <= 11; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}