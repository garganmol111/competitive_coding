// https://www.codechef.com/problems/CIELRCPT

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, p, c, temp;
	cin>>t;
	while(t--) {
	    cin>>p;
	    c=0;
	    while(p!=0) {
	        temp = (int) log2(p);
	        if(temp>=12)
	            p=p-pow(2,11);
	        else
	            p=p-pow(2,temp);
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
