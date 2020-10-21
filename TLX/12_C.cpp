#include <iostream>
#include <cmath>
using namespace std;

int a,b;

int fx(int k,int x) {
    int res;
    if (k!=0) {
        res=abs(a*x+b);
        return fx(k-1,res);
    } else {
        return x;
    }
}

int main() {
    int k,x;
    cin >> a >> b >> k >> x;
    cout << fx(k,x) <<endl;
}