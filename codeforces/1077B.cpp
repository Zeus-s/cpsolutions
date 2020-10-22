#include <iostream>
#include <cmath>
using namespace std;

int arr[100005];

int main() {
   int n;
   cin >> n;
   
   int count=0;
   for (int i=0; i < n; i++) {
      cin >> arr[i];
   }

   for (int i=1; i < n-1; i++) {
      if (arr[i-1]==1 && arr[i]==0 && arr[i+1]==1 ) {
         ++count;
         arr[i+1]=0;
      }
   }

   cout << count <<endl;


}