//https://www.codechef.com/problems/LUCKFOUR

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, c;
	long t;
    string n;
	cin>>t;
	while(t--) {
	    c=0;
	    cin>>n;
	    for(i=0; i<n.length(); i++)
	        if(n[i]=='4')
	            c++;
	    cout<<c<<endl;
	}
	
	return 0;
}
