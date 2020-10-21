#include <cstdio>

int main() {
    int n,x;
    scanf("%d %d",&n,&x);

    for (int i=1;i<=n;i++) {
        if (i%x==0 && i==n) {
            printf("*\n");
        } else if (i%x==0) {
            printf("* ");
        } else if (i==n) {
            printf("%d\n",n);
        } else if (i!=x) {
            printf("%d ",i);
        }

        // if (i!=x) {
        //     printf("%d ",i);
        // } else if (i%x==0) {
        //     printf("* ");
        // } else if (i==n) {
        //     printf("%d\n",n);
        // }
    }
}