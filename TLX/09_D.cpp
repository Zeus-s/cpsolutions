#include <cstdio>

int matr[105][105];

int main() {
    int a,b,i,j;

    scanf("%d %d",&a,&b);

    for(i=0;i<a;i++) {
        for (j=0;j<b;j++){
            scanf("%d",&matr[i][j]);
        }
    }

    for (j=0;j<b;j++) {
        for (i=a-1;i>=0;i--) {
            if (i==0) {
                printf("%d\n",matr[i][j]);
            } else {
                printf("%d ",matr[i][j]);
            }
        }
    }
}