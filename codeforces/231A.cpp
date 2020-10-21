#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,imp=0;
    cin >> n;
    for (int i=0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c>=2) {
            imp+=1;
        }
    }
    cout << imp <<endl;
}