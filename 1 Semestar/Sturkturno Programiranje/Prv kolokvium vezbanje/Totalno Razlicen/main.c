#include <stdio.h>

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    n--;
    for(n; n>0; n--){
        int ista = 0;
        for(int prethodnaN = n; prethodnaN != 0; prethodnaN/=10){
            for(int prethodnaX = x; prethodnaX != 0; prethodnaX/=10){
                if(prethodnaN==prethodnaX) ista = 1;
            }
        }
        if(!ista) break;
    }
    printf("%d", n);
}
