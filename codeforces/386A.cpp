#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];

int main() {
    int n,a,cost=1,index;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        if (cost<=arr[i]) {
            cost=arr[i];
            index=i;
        }
    }
    sort(arr,arr+n);
    cout << ++index << " " << arr[n-2] <<endl;
}
