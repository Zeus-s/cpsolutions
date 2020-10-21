#include <cstdio>
#include <cmath>

void reverse(int x,int &y) {
    int temp = x;
    int ret = 0;

    while (temp>0) {
        ret = (ret*10)+(temp%10);
        temp/=10;
    }
    y=ret;
}

int main() {
    int x,y,a,x2,y2;
    scanf("%d %d",&x,&y);

    reverse(x,x2);
    reverse(y,y2);

    reverse(x2+y2,a);

    printf("%d\n",a);


}