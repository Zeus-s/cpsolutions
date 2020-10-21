#include <cstdio>

int f[100001];
// f[i] adalah banyaknya i muncul dalam data

int main() {
    int n, x,i, modus = 0;
    scanf("%d",&n);

    for (i=0; i<100001; i++) {
        f[i]=0;
    }

    // karena pada awal program belum ada data,
    // maka banyaknya data untuk tiap i (f[i]) adalah 0
    // buat loop untuk set semua data f[0..100000] = 0

    for (i = 0; i < n; i++) {
        // baca variabel x
        // ...
        // lalu tambahkan f[x] sebanyak 1
        // ...
        // jika f[x] > f[modus], set modus = x
        // ...
            scanf("%d",&x);
            f[x]=f[x]+1;
            if (f[x]>f[modus]) {
                modus=x;
            }

            if (f[x]==f[modus] && x > modus) {
                modus=x;
            }
    }
    printf("%d\n",modus);
}