#include <cstdio>

int main() {
    int N;
    scanf("%d",&N);
    int hasil = 0;

    for (int i=0; i<N; i++) {
        int Angka;
        scanf("%d",&Angka);
        hasil += Angka;
    }

    printf("%d\n",hasil);
}