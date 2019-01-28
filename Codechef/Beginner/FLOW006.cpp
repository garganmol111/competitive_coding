//problem statement can be found at:
//https://www.codechef.com/problems/FLOW006

#include<iostream>

using namespace std;

int main() {
    int n, t, sum, temp;
    cin>>t;
    while(t--) {
        sum=0;
        cin>>n;
        while(n) {
            temp=n%10;
            n=n/10;
            sum+=temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
