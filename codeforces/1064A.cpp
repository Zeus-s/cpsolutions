#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    ll a,b,c,x,y,res;
    cin >> a >> b >> c;
    ll m=max(a,max(b,c));
    ll s=(a+b+c)/2;
    if (s>a && s>b && s>c) {
        cout << 0 <<endl;
    } else {
        if (a==m && b!=m && c!=m) {
            x=b;
            y=c;
        } else if (a!=m && b==m && c!=m) {
            x=a;
            y=c;
        } else if (a!=m && b!=m && c==m) {
            x=a;
            y=b;
        }

        res=m-(x+y-1);
        cout << res <<endl;
    }
}