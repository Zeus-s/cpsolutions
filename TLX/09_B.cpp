#include <cstdio>

int main () {
    int n=0,arr[101];

    while (scanf("%d",&arr[n])==1) {
        n++;
    }
    
    for (int i=n-1;i>=0;i--) {
        printf("%d\n",arr[i]);
    }

}