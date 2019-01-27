// https://www.codechef.com/problems/FSQRT

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, n, i;
	cin>>t;
	while(t--) {
	    cin>>n;
	    i = sqrt(n);
	    cout<<i<<"\n";
	}
	return 0;
}
