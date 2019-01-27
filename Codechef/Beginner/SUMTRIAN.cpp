// https://www.codechef.com/problems/SUMTRIAN

#include<bits/stdc++.h>
using namespace std;



int main() {
    int t, temp, n;
    vector<vector<int>> a;
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=0; i<n; i++) {
            vector<int> row;
            for(int j=0; j<=i; j++) {
                cin>>temp;
                row.push_back(temp);
            }
            a.push_back(row);
        }
        
        for(int i = n-2; i>=0; i--) {
            for(int j=i; j>=0; j--) {
                if(a[i+1][j+1] > a[i+1][j])
                    a[i][j] += a[i+1][j+1];
                else
                    a[i][j] += a[i+1][j];
            }
        }
        cout<<a[0][0]<<"\n";
        a.clear();
    }

    return 0;
}
