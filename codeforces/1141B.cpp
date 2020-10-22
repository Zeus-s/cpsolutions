#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ll n,m,cnt=0;
    cin >> n >> m;
    ll sisa = m/n;
    if (m%n==0) {
        while (sisa%2==0) {
            sisa/=2;
            cnt+=1;
        }
        while (sisa%3==0) {
            sisa/=3;
            cnt+=1;
        }
        if (sisa==1) {
            cout << cnt << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}