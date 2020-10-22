#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int t,k;
   long long a,b;
   cin >> t;
   

   for (int i=0; i<t; i++) {
      cin >> a >> b >> k;
      long long pos;
      int jumpb=floor(k/2);
      int jumpa=k-jumpb;

      pos = (a*jumpa)-(b*jumpb);
      cout << pos <<endl;
   }


return 0;
}