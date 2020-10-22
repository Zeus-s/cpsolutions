#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

char arr[10005][10005];

int main() {
    int n,m,minx;
    cin >> n >> m;
    int up=0,bot=0,left=0,rgh=0,cntb=0,total,len;
    for (int i=1; i <= n; i++) {
        for (int j=1; j <= m; j++) {
            cin >> arr[i][j];
            if (arr[i][j]=='B') {
                if (up==0) {
                    up=i;
                }
                if (rgh==0) {
                    rgh=j;
                } else if (j>rgh) {
                    rgh=j;
                }
                bot=i;
                if (left==0) {
                    left=j;
                } else if (j<left) {
                    left=j;
                }
                cntb+=1;
            }
        }
    }
    int h,w;
    h=(bot-up+1); w=(rgh-left+1);
    len=max(h,w);
    if (len>n || len>m) {
        cout << -1 << endl;
    } else if (cntb <=0) {
        cout << 1 << endl;
    }  else {
        cout << len*len-cntb << "\n";
    }
    
}