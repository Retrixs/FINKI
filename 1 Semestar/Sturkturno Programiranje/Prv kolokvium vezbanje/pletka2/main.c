#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(j==0 || j==n-1){
                printf("&");
            }else if(i==0 || i==m-1){
                printf("#");
            }else {
                printf(".");
            }
            if(j==n-1) printf("\n");
        }
    }
}
