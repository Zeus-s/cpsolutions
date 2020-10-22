#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int i=0; i < t; i++) {
        ll x,y,n,k=0;
        cin >> x >> y >> n;
        k=n%x;
        if (n-k+y>n) {
            k=(n-k+y)-x;
        } else {
            k=n-k+y;
        }
        cout << k << endl;
    }
}