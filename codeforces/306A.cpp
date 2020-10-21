#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int ratio=a/b;
    int rem=a%b;
    for (int i=0; i < b; i++) {
        cout << ratio+(i<rem) << " ";
    }
    cout << "\n";
}