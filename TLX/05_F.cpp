#include <bits/stdc++.h>

int main() {
    double i;

    scanf("%lf",&i);

    if (i>0) {
        printf("%.0lf %.0lf\n", trunc(i), trunc(i+0.99999) );
    }  else if (i<0) {
        printf("%.0lf %.0lf\n", trunc(i-0.99999), trunc(i) );
    } else if (i==0) {
        printf("%.0lf %.0lf\n",i,i);
    }
}
