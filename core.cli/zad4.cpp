#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int lTrjkt = 0;
    int n = 0;
    int czynniki;
    int i;

    while (i) {
        n++;
        lTrjkt += n;
        czynniki = 0; 

        for (i = 1; i < (int) floor(sqrt(lTrjkt)); i++) {
            if (lTrjkt % i == 0) czynniki+=2;

            if ((int)floor(sqrt(lTrjkt)) * (int)floor(sqrt(lTrjkt)) == lTrjkt) czynniki--;            
        }
        if (czynniki > 500) break;
    }
    printf ("Liczba trojkatna: %d czynniki: %d\n", lTrjkt, czynniki);
    return 0;
}