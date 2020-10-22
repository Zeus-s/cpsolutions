#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;

ll lcm(ll x,ll y) {
    ll hasil;
    hasil=(x*y)/__gcd(x,y);
    return hasil;
}

int main() {
    ll n,a,b,p,q,res=0;
    cin >> n >> a >> b >> p >> q;
    res=(p*(n/a))+(q*(n/b))-((min(p,q))*(n/lcm(a,b)));
    cout << res << endl;
    return 0;
}