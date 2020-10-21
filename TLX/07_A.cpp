#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        if (i%10==0) {
            continue;
        }
         if(i==42) {
            break;
        }

        printf("%d\n",i);
       
    }
    if (n>=42) {
        printf("ERROR\n");
    }
}

// #include <cstdio>

// int main() {
//     int n;
//     scanf("%d",&n);

//     bool b=false;

//     for (int i=1;i<=n;i++) {
//         if (i%10==0) {
//             continue;
//         }
//          if(i==42) {
//             break;
//         }

//         printf("%d\n",i);
       
//     }

//     if (b==true) {
//         printf("ERROR\n");
//     }
// }