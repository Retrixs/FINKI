#include <stdio.h>
int main(){
    int suma_pogolem = 0, suma_pomal = 0;
    long long int n, z, big, smol, cifriB, cifriS;
    scanf("%lld %lld", &n, &z);
    if (n <= 0 || z <= 0) {
        printf("Invalid input");
        return 0;
    }
    if (z > n) {
        big = z;
        smol = n;
    }else{
        big = n;
        smol = z;
    }
    while(big>0) {
        cifriB = big;
        suma_pogolem += big % 10 + (cifriB / 100) % 10;
        big /= 10000;
    }
    while(smol>0){
        cifriS = smol;
        suma_pomal += smol%10 + cifriS/10%10;
        smol/=100;
    }
    if(suma_pogolem==suma_pomal) {
        printf("ista suma");
    }
    else {
        printf("NE");
    }
    return 0;
}