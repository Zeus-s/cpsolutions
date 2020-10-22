#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ll n,cnt;
    for (int i=1; i < n; i++) {
        for (int j=1; j < n; j++) {
            for (int k=1; k < n; k++) {
                if (a*b+c==n) {
                    cnt+=1;
                }
            }
        }
    }

    cout << cnt << endl;

}