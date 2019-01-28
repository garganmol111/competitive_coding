// https://www.codechef.com/problems/RECIPE

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, temp;
    vector<int> a;
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>temp;
            a.push_back(temp);
        }
        int result = a[0];
        for(int i=1; i<n; i++)
            result = gcd(a[i], result);
        for(int i=0; i<n; i++)
            cout<<a[i]/result<<" ";
        cout<<"\n";
        a.clear();
    }
    return 0;
}
