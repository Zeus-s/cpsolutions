#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

ll arr[10005];

int main() {
    ll n,m,res=1;
    cin >> n >> m;
    if (n>m) {
        cout << 0 << endl;
    } else {
        for (int i=0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i=0; i < n; i++) {
            for (int j=i+1; j < n; j++) {
                int x=abs(arr[i]-arr[j])%m;
                res=(res*x)%m;
            }
        }
        cout << res << endl;
    }
    
}