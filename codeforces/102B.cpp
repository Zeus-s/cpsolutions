#include <bits/stdc++.h> 
using namespace std;

int counter(string s) {
    int sum=0, cnt=0;
    while ( s.length()>1 ) {
        sum=0;
        for (int i=0; i < s.length();  i++) {
            sum += ( s[ i ] - '0') ;
        }
        s = to_string(sum);
        cnt++;
    }
    return cnt;
}
int main() {
    string s;
    cin >> s;
    cout << counter(s);
    return 0;
}