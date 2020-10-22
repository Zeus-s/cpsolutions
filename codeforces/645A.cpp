#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string a,a1,b,b1;
    cin >> a >> a1 >> b >> b1;
    swap(a1[0],a1[1]);
    swap(b1[0],b1[1]);
    a = a+a1;
    b = b+b1;
    a.erase(a.find('X'),1);
    b.erase(b.find('X'),1);
    string a0 = a+a;
    if (a0.find(b)!=string::npos ) {
        cout << "YES" <<endl;
    } else {
        cout << "NO" <<endl;
    }
}