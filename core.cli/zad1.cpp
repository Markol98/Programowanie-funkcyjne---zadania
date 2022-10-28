#include <iostream>
#include <cmath>

using namespace std;

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n-2) + fib(n-1);
}

int main() {
    int i, n;
    
    cout << "Wpisz wyraz ciagu: ";
    cin >> n;
    
    for( i = 1; i <= n; i++)
        cout << fib(i) << "\t";
    return 0;
}

