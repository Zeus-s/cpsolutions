#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);
    
    int i=0,arr[100000],modus,j,count,ind;

    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    modus=arr[0];
    for (i=0;i<n;i++) {
        if (arr[i]>0) {
            count=1;
            for (j=i+1;j<n;j++) {
                if (arr[i]==arr[j]){
                    arr[j]=0;
                    count=count+1;
                }
            }

            if (count>ind) {
                ind=count;
                modus=arr[i];
            } else {
                if (count==ind) {
                    if (arr[i]>modus) {
                        ind=count;
                        modus=arr[i];
                    }
                }
            }
        }
    }
    printf("%d",modus);
}