#include <stdio.h>
#include <math.h>
int main() {
    int  n;
    while(1){
        if(!scanf("%d", &n)) break;
        int poceten = n;
        if(n<10) continue;
        int znak;
        if(n%10>n/10%10){
            znak = 1;
        }else if (n%10<n/10%10){
            znak = 0;
        }else continue;
        while(n!=0){
            n/=10;
            if(n<10) {
                printf("%d\n", poceten);
                break;
            }
            if(znak){
                if(n%10>n/10%10) break;
            }else{
                if(n%10<=n/10%10) break;
            }
            znak=!znak;
        }
    }
    return 0;
}
