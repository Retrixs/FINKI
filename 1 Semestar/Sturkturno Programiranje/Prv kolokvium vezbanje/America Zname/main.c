#include <stdio.h>
int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int red = m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if( i == 0 || i % 2 == 0){
                if( j == 0 || j % 2 == 0){
                    printf(".");
                }else{
                    printf("*");
                }
            }else{
                if( j == 0 || j % 2 == 0){
                    printf("*");
                }else{
                    printf(".");
                }
            }
            if( j == n - 1) printf("\n");
        }
    }
    return 0;
}
