#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int t;
   long long s,a,b,c;
   cin >> t;
   long long total;

   for (int i=0; i < t; i++) {
      cin >> s >> a >> b >> c;
      total = (s/c) + (s/c/a)*b;
      cout << total <<endl;
   }

return 0;
}