#include <cstdio>

int arr[1001];

int main() {
    int n;
    scanf("%d",&n);

    if (n==1) {
        printf("0\n");
    }

    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }


}