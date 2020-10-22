#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n,cnt=0,tempcnt=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<2*n; i++) {
        if (arr[i%n]==1) {
            tempcnt+=1;
            cnt=max(cnt,tempcnt);
        } else {
            tempcnt=0;
        }
    }
    cout << cnt << endl;
}