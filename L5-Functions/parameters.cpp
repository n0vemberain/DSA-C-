#include <iostream>
using namespace std;

int sum(int a, int b){
    int s = a + b;
    return s;
}

int sumN(int n){
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int factN(int n){
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
    
}

int main(){
    cout << factN(5) << endl;

}