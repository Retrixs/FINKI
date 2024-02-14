#include <stdio.h>
int main(){
    int n, suma_parni = 0, suma_neparni = 0;
    int parnicifri = 0, neparnicifri = 0;
    while(scanf("%d", &n)) {
        while (n > 0) {
            int cifri = n;
            if (cifri % 10 % 2 == 0) {
                suma_parni += cifri % 10;
            } else if (cifri % 10 % 2 != 0) {
                suma_neparni += cifri % 10;
            }
            n /= 10;
        }
        if (suma_neparni <= 5) {
            neparnicifri++;
        }
        if (suma_parni > 5) {
            parnicifri++;
        }
        suma_parni = 0, suma_neparni = 0;
    }
    printf("Broevi so zbir pogolem od 5: %d\n", parnicifri);
    printf("Broevi so zbir pomal ili ednakov na 5: %d", neparnicifri);
    return 0;
}