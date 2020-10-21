#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);

    double hasil = (a * b);
    hasil /= 2;

    printf("%.2lf\n", hasil);
}