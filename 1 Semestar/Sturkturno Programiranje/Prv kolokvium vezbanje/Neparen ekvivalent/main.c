#include <stdio.h>

int main() {
    int x, y;
    int golem, mal;
    scanf("%d%d", &x, &y);
    if(x<=0 || y<=0){
        printf("Invalid input");
        return 0;
    }
    if(x > y){
        golem = x;
        mal = y;
    }else{
        golem = y;
        mal = x;
    }
    while(golem>0){
        if(golem%10!=mal%10){
            printf("NE");
            return 0;
        }else{
            golem/=100;
            mal/=10;
        }
    }
    printf("DA");
    return 0;
}
