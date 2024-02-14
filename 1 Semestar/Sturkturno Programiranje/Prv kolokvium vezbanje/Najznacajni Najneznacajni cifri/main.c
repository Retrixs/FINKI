#include <stdio.h>

int main() {
    int n, najgolema, najmala;
    int golema_cifra = 0, mala_cifra = 9;
    int pozicija = 1, prethodna_mc, prethodna_gc, big_pozicija, small_pozicija;
    while(1){
        if(!scanf("%d", &n)) break;
        int cifri = n;
                while(cifri>0){
                    if(golema_cifra<cifri%10){
                        golema_cifra = cifri%10;
                    }if(mala_cifra>cifri%10){
                        mala_cifra = cifri%10;
                    }
                    cifri/=10;
                }
                if(pozicija==1){
                    prethodna_gc = golema_cifra;
                    prethodna_mc = mala_cifra;
                }
                if(golema_cifra>prethodna_gc){
                    big_pozicija = pozicija;
                    najgolema = n;
                    prethodna_gc = golema_cifra;
                }
                if(mala_cifra<prethodna_mc){
                    small_pozicija = pozicija;
                    najmala = n;
                    prethodna_mc = mala_cifra;
                }
                pozicija++;
    }
    printf("Najgolema najneznacjna cifra ima brojot %d na pozicija %d\n", najgolema, big_pozicija);
    printf("Najmala najznacajna cifra ima brojot %d na pozicija %d", najmala, small_pozicija);
    return 0;
}
