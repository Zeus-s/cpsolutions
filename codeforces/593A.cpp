#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
vector <string> s;

const string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main() {
    int n;
    cin >> n;
    s.resize(n);
    for (int i=0; i < n; i++) {
        cin >> s[i];
    }
    int res=0;
    for (int i=0; i < 26; i++) {
        for (int j=0; j < 26; j++) {
            char pair1=alphabet[i];
            char pair2=alphabet[j];
            int temp=0;
            for (const string& w : s) {
                bool distinct=true;
                for (char cc : w) {
                    if (cc!=pair1 && cc!=pair2) {
                        distinct = false;
                        break;
                    }
                }
                if (distinct) {
                temp+=w.length();
                }
            }
            res=max(res,temp);
        }
    }
    cout << res << "\n";
}