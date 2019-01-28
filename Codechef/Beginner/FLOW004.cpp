// https://www.codechef.com/problems/FLOW004

#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, s, l;
	string n;
	cin>>t;
	while(t--) {
	    cin>>n;
	    l = n.size();
	    s = (n.front()-'0') + (n.back()-'0');
	    cout<<s<<"\n";
	}
	return 0;
}
