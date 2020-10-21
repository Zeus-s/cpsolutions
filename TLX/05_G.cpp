#include <cstdio>

int main() {
    int total,x1,x2,y1,y2,x,y;

    scanf("%d %d %d %d", &x1,&y1,&x2,&y2);

    x=x1-x2;
    y=y1-y2;
    
    if (x<0) {
        x=-x;
    }

    if (y<0) {
        y=-y;
    }

    total=x+y;
    printf("%d\n",total);
}