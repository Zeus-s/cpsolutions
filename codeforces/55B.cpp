#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;

ll cek(ll a,ll b,ll c,ll d,string s) {
    long long tot=0;
    if (s == "+++") {
        tot+=a+b+c+d;
    } else if (s == "++*") {
        tot+=(a+b+c)*d;
    } else if (s == "+**") {
        tot+=(a+b)*c*d;
    } else if (s == "***") {
        tot+=a*b*c*d;
    } else if (s == "*++") {
        tot+=a*b+c+d;
    } else if (s == "**+") {
        tot+=a*b+c*d;
    } else if (s == "*+*") {
        tot+=((a*b+c)*d);
    } else if (s == "+*+") {
        tot+=a+b+(c*d);
    }
    return tot;
}

int main() {
    ll a,b,c,d,sum=1e18,temp=0;
    string s; s.resize(3);
    cin >> a >> b >> c >> d;
    ll arr[4] = {a,b,c,d};
    for (int i =0; i < 3; i++) {
        cin >> s[i];
    }
    sort(arr,arr+4);
    do {
        temp=cek(arr[0],arr[1],arr[2],arr[3],s);
        if (temp < sum) {
            sum=temp;
        }
    } while (next_permutation(arr,arr+4));
    cout << sum << endl;
    return 0;
}