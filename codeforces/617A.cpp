#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    ll n,res;
    cin >> n;
    if (n>5) {
        if (n%5!=0) {
            res=ceil(n/5)+1;
        } else {
            res=ceil(n/5);
        }
        cout << res << endl;
    } else {
        res=1;
        cout << res << endl;
    }
}