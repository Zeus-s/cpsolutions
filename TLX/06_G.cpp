#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);

    int a=-100000,b=100000;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%d",&x);

        if (b>x) {
            b=x;
        }
        
        if (a<x) {
            a=x;
        }
    }
    printf("%d %d\n",a,b);
}