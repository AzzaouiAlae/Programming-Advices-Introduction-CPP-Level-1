#include <iostream>

using namespace std;

int main()
{
    for (int i = 10; i >= 0; i--)
    {
        for (int j = 1; j + i <= 10; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}