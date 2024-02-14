#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n < 1000 || n > 9999) {
        printf("greska");
        return 0;
    }
    int c1, c2, c3, c4;
    int startBr = n;
    int petki = 0;
    int Kolega = 1;
    c1 = n % 10;
    c2 = n / 10 % 10;
    c3 = n / 100 % 10;
    c4 = n / 1000 % 10;
    while(n > 0) {
        if (n % 10 == 5) petki++;
        n /= 10;
        if (n < 5 && petki < 2) {
            printf("greska");
            return 0;
        }
    }
        if(c4==5){
            Kolega= Kolega * 10 + 6;
        }else{
            Kolega= Kolega * 10 + c4;
        }
        if(c3==5){
            Kolega= Kolega * 10 + 6;
        }else{
            Kolega= Kolega * 10 + c3;
        }
        if(c2==5){
            Kolega= Kolega * 10 + 6;
        }else{
            Kolega= Kolega * 10 + c2;
        }
        if(c1==5){
            Kolega= Kolega * 10 + 6;
        }else{
            Kolega= Kolega * 10 + c1;
        }
        Kolega%=10000;
    float result = abs(Kolega-startBr);
    float procent = (result / startBr) * 100;
    printf("%.2f%%", procent);
    return 0;
}