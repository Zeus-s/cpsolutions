#include <iostream>
#include <string>
using namespace std;

string s;

bool pal(string s,int low,int high) {
    
    if (low >= high) {
        return true;
    }

    if (s[low]!=s[high]) {
        return false;
    }
    return pal(s, low +1,high -1);
}

int main() {
    string s;
    cin >> s;
    int len = s.length();
    if (pal(s,0,len-1) == true) {
        cout << "YA" <<endl;
    } else {
        cout << "BUKAN" <<endl;
    }
}