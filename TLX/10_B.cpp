#include <cstdio>

int arr[2][1001];

    void swab(int &a,int &b) {
        int temp=a;
        a=b;
        b=temp;
    }

int main() {
    int n,i,j,t;
    scanf("%d",&n);

    for(i=0;i<2;i++){
        for (j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    scanf("%d",&t);
    for (i=0;i<t;i++) {
        char buff1[5], buff2[5];
        int x,y;
        scanf("%s %d %s %d",buff1,&x,buff2,&y);

        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;

        swab(arr[p][x],arr[q][y]);
    }

    for (i=0;i<2;i++) {
        for (j=0;j<n;j++) {
            printf("%d", arr[i][j]);
            if (j+1<n) {
                printf(" ");
            }
        }
        printf("\n");
    }
}