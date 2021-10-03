#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int x=log2(n);
    int k=pow(2,x);
    if((n-k)>=(k/2))
    {
        cout<<n-k+1<<endl;
    }
    else if((k/2)>(n-k))
    {
        cout<<k/2<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}