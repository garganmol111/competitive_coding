// https://www.codechef.com/problems/LECANDY

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, c;
    int arr[1001];
    cin>>t;
    while(t--) {
        cin>>n>>c;
        for(int i=0; i<n; i++) 
            cin>>arr[i];
        
        int s=0;
        for(int i=0; i<n; i++) {
            s+=arr[i];
        }
        if(s>c) cout<<"No\n";
        else    cout<<"Yes\n";
    }
    return 0;
}