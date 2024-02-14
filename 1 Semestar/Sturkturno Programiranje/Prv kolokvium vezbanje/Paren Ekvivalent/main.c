#include <stdio.h>
int main(){
    int n, Kolega = 1, petki = 0;
    scanf("%d", &n);
    if(n<1000 || n >9999){
        printf("Greska");
        return 0;
    }
    int startBr = n;
    int start = n;
    while(n>0) {
        if (n % 10 == 5) {
            petki++;
            n /= 10;
        } else {
            n /= 10;
        }
        if (petki < 2 && n < 5) {
            printf("Greska");
            return 0;
        } else continue;
    }
    while(startBr>0) {
        int cifra = startBr % 10;
        if (cifra == 5) cifra = 6;
        startBr/=10;
        Kolega = Kolega * 10 + cifra;
    }
    Kolega = Kolega%10000;
    float procent;
    procent = ((float) (Kolega - start) / start) * 100 ;
    printf("%f%%", procent);
    return 0;
}