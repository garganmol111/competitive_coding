//problem statement can be found at:
//https://www.codechef.com/problems/INTEST

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, c;
	long k, temp;
	vector<long> t;
	cin>>n;
	do
	{
	    cin>>k;
	}while(k<1 || k>10000000);
	while(n--)
	{
	   cin>>temp;
	   t.push_back(temp);
	}
	for (long temp:t)
	{
	    if(temp%k==0)
	        c++;
	}
	cout<<c;
	return 0;
}