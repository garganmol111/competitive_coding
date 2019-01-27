// https://www.codechef.com/problems/FLOW018

#include<iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        int f=1;
        cin>>n;
        for(int i=1; i<=n; i++)
            f*=i;
        cout<<f<<"\n";
    }
    return 0;
}