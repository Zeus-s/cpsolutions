#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string s;

int main() {
    int n;
    cin >>n;
    for (int i=0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length()>10) {
            cout << s[0] << s.length()-2 << s[s.size()-1] <<endl;
        } else {
            cout << s << endl;
        }
    }
}