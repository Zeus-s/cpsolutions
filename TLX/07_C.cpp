#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);
    int x=0;
    
    for (int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            
            printf("%d",(x++)%10);
            // x=x+1;
            // x%=10;
        }
        printf("\n");
    }
}