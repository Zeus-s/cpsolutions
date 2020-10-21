#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int len=abs(a-b);
    int cnta=len/2;
    int cntb=len-(len/2);
    cout << (((cnta*(cnta+1))/2) + ((cntb*(cntb+1))/2)) <<endl;
}