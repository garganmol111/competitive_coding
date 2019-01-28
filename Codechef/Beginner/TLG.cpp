//https://www.codechef.com/problems/TLG

#include <iostream>
using namespace std;

int main() {
    int n, p1=0, p2=0, l=0, w, t1, t2;
    cin>>n;
    while(n--) {
        cin>>t1>>t2;
        p1+=t1;
        p2+=t2;
        if(p1>p2) {
            if((p1-p2)>l){
                l=p1-p2;
                w=1;
            }
        }
        else {
            if((p2-p1)>l){
                l=p2-p1;
                w=2;
            }
        }
    }
    cout<<w<<" "<<l;
	return 0;
}
