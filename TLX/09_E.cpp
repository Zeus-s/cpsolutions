// #include <iostream>
// using namespace std

// int matr[105][105];
// int main() {

// }

#include <cstdio>
#include <cmath>

int matra[105][105];
int matrb[105][105];
int matrc[105][105];

int main() {
    int n,m,p,a,b,c,s,t;

    scanf("%d %d %d",&n,&m,&p);

    for (a=1;a<=n;a++) {
        for (b=1;b<=m;b++) {
            scanf("%d",&matra[a][b]);
        }
    }

    for (b=1;b<=m;b++) {
        for (c=1;c<=p;c++) {
            scanf("%d",&matrb[b][c]);
        }
    }

    for (a=1;a<=n;a++) {
        for(c=1;c<=p;c++) {
            //
            matrc[a][c]=0;
            for (b=1;b<=m;b++) {
                matrc[a][c]+=(matra[a][b])*(matrb[b][c]);
            }
            if (c==p) {
                printf("%d\n",matrc[a][c]);    
            } else {
                printf("%d ",matrc[a][c]); 
            }    
        }      
    }
}