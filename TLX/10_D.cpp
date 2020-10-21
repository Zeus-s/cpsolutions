#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d",&n);
    bool pertama=true;

    for(int i=2;i<=n;i++) {
        if (n%i==0) {
            if (!pertama) {
                printf(" x ");
            }
            printf("%d",i);
            int a=0;
            while (n%i==0) {
                a+=1;
                n/=i;
            }

            if (a!=1) {
                printf("^%d",a);
            }
            pertama=false;
        }
    }
    printf("\n");
}