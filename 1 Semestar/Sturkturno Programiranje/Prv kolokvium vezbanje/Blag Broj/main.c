#include <stdio.h>
int main(){
    int blag_broj,pocetok_na_opseg,kraj_na_opseg,cifri;
    scanf("%d%d",&pocetok_na_opseg,&kraj_na_opseg);
    for(blag_broj=pocetok_na_opseg; blag_broj<=kraj_na_opseg;blag_broj++){
        cifri=blag_broj;
        while (cifri!=0){
            if(cifri%10%2!=0){
                break;
            }
            cifri/=10;
        }
        if(cifri==0){
            printf("%d",blag_broj);
            break;
        }else{
            if(blag_broj == kraj_na_opseg) printf("NE");
        }

    }
    return 0;
}