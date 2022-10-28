#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int n;
    double c, c1;
    cout << "Wpisz liczbe: ";
    scanf("%d", &n);
    if (n==0)
    c1=0;
    else {
        c = log10(n)/3;
        c1 = pow(10, c);
    }
    printf("Pierwiastek szescienny: %lf", c1);
}