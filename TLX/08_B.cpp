#include <cstdio>
#include <cmath>

int main() {
    int n,a;
    bool cek;
    scanf("%d",&n);


    for (int i=0;i<n;i++) {
        scanf("%d",&a);
        cek=true;
        
        if (a<2) {
            cek=false;
        }

        for (int j=2;j<=trunc(sqrt(a));j++) {
            if (a%j==0) {
                cek=false; 
                break;
            }
        }

        if (cek==true) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}

