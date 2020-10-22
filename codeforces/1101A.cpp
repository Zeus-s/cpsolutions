#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    bool bar=false;
    while (n--) {
        ll l,r,d,itt=1;
        cin >> l >> r >> d;
        if (d<l || d>r) {
            cout << d <<endl;
        } else {
            cout << (((r-(r%d))/d)*d)+d <<endl;
        }
    }
    return 0;
}