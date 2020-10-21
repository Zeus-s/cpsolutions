#include <iostream> 
using namespace std; 

string find(long long n) { 
	if (n == 1) {
		return "1"; 
	} else if (n%2==1) {
        return find(n/2) + "1";
    } else { 
		return find(n / 2) + "0"; 
    }
} 


int main() { 
	long long n;
    cin >> n; 
	cout << find(n) <<endl; 
	return 0; 
} 
