#include <iostream>
#include <cmath>
using namespace std;
int arr[10001];

int main() {
    int n,k,count=0;
    cin >> n >> k;
    for (int i=1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i]!=0 && arr[i]>=arr[k]) {
            count+=1;
        }
    }
    cout << count <<endl;
}