#include <stdio.h>

int main(){
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(j==0 || j==m-1) printf("%%");
            else if (i==0 || i==m-1) printf("@");
            else printf(".");
            if( j == m - 1) printf ("\n");
        }
    }
    return 0;
}
