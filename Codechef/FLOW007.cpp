// https://www.codechef.com/problems/FLOW007

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t, i;
	string n;
	cin>>t;
	while(t--){
	    cin>>n;
	    reverse(n.begin(), n.end());
	    i = stoi(n);
	    cout<<i<<"\n";
	}
	return 0;
}
