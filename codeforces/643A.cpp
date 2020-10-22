#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int data[5005], cnt[5005], res[5005];

int main() {
    int n;
    cin >> n;
    for (int i=1; i <= n; ++i) {
        cin >> data[i]; 
    }
    for (int i=1; i <= n; ++i) {
        for (int j=1; j<=n; ++j) {
            cnt[j]=0;
        }
        int temp=0;
        for (int k=i; k<=n; ++k) {
            int val=data[k];
            ++cnt[val];
            if (cnt[val]>cnt[temp] || (cnt[val]==cnt[temp] && val < temp)) {
                temp=val;
            }
            ++res[temp];
        }
    }
    
    for (int i=1; i <=n; ++i) {
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}   