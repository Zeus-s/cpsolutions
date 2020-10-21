#include <cstdio>

int n,m,hasil,sisa;

int main() {
    scanf("%d %d", &n, &m);
    
    hasil = n/m;
    sisa = n%m;
    
    printf("masing-masing %d\n", hasil);
    printf("bersisa %d\n", sisa);
}