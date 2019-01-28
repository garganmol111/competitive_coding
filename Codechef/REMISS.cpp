// https://www.codechef.com/problems/REMISS

#include<iostream>
using namespace std;

int main() {
    int t, a, b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        if(a>b) cout<<a;
        else    cout<<b;

        cout<<" "<<a+b;
        cout<<"\n";
    }
    return 0;
}