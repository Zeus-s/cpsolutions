#include <cstdio>
#include <cmath>

int main () {
    int n,a;
    int p=2;
    bool cek;
    scanf("%d",&n);

    for (int i=0;i<n;i++) {
        scanf("%d",&a);
        cek=true;

        for (int j=2;j<=trunc(a/2);j++) {
            if (a%j==0) {
            p=p+1;
            }
            if (p>4) {
                cek=false;
                break;
            }
        }

        if (cek==true) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
        p=2;
    }
    return 0;
}