//Problem statement can be found at:
//https://www.codechef.com/problems/HS08TEST

#include <iostream>
using namespace std;

int main() {
	int a;
	float b;
	do
	{
	    cin>>a>>b;
	}while(a<=0 && a>2000 && b<=0 && b>2000);
    if(a%5==0 && a<(b-0.5))
    {
        cout<<(b-a-0.5);
    }
    else
        cout<<b;
	return 0;
}