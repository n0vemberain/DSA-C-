#include <iostream>
using namespace std;

int main()
{
    int n = 30;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';  //ASCI A = 65
        for (int i = 1; i <= n; i++)
        {
            // cout << "*";
            cout << ch;
            ch = ch + 1;
        }
        cout << "\n";
    }
}