#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    ll n,a,b,x,num;
    cin >> n >> a >> b;
    int ind;
    for (int i=0; i <=10000000; i++) {
        ind=0;
        num=(n-a*i);
        if (num < 0) {
            break;
        }
        if (num%b==0) {
            x=i; ind=1;
            break;
        }
    }
    if (ind==1) {
        cout << "YES" << "\n";
        cout << x << " " << num/b;
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}