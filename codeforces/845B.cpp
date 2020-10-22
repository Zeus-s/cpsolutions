#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;

int arr[10005];

int main() {
    string s;
    cin >> s;
    int ind;
    for (int i=0; i < s.length(); i++) {
        arr[i]=s[i]-'0';
    }
    int max=6;
    if (arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5]) {
        ind=0;
        cout << 0 << endl;
    } else {
        ind=1;
        for (int i =0; i<=9; i++) {
            for (int j = 0; j <=9; j++) {
                for (int k =0; k<=9; k++) {
                    for (int l =0; l<=9; l++) {
                        for (int m =0; m<=9; m++) {
                            for (int n =0; n<=9; n++) {
                                if (i+j+k!=l+m+n) continue;
                                int change=0;
                                if (arr[0]!=i) change+=1;
                                if (arr[1]!=j) change+=1;
                                if (arr[2]!=k) change+=1;
                                if (arr[3]!=l) change+=1;
                                if (arr[4]!=m) change+=1;
                                if (arr[5]!=n) change+=1;
                                max = min(max,change);
                            }
                        }
                    }
                }
            }
        }
    }
    if (ind==1) {
        cout << max << "\n";
    }
    return 0;
}