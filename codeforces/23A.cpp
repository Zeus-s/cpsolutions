#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    map <string, int> q;
    int len = s.size();
    int ma=0;

    for (int i=0; i < len; i++) {
        for (int j=0; j < len; j++) {
            string a;
            for (int k=i; k <= j; k++) {
                a+=s[k];
            }
            q[a]++;
            if (q[a]>=2) {
                ma=max(ma,j-i+1);
            }
        }
    }

  cout << ma <<endl;
}