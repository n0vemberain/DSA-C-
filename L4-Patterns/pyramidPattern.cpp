#include<iostream>
using namespace std;

int main(){

    int n = 20 ;

    for (int i = 0; i < n; i++)
    {
        //space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        //number1 
        for (int j = 1; j <= i+1; j++)
        {
            cout << j;
        }

        //number2
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        
        cout << endl;
    }
    
}