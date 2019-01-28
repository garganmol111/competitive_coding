//problem statement can be found at:
//https://www.codechef.com/problems/TSORT

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
	long t, temp;
	vector<long> vec;
	cin>>t;
	while(t--) {
	    cin>>temp;
	    vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	for(auto i:vec)
	    cout<<i<<endl;
	return 0;
}