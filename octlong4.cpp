#include<iostream>
using namespace std;

void solve()
{
    int x,i=1;
    cin>>x;
    if(x==0)
    {
        cout<<"1"<<endl;
        return;
    }
    if(x==1 || x==2)
    {
        cout<<"2"<<endl;
        return;
    }
    else
    {
        for (i = 1; i*2<=x;)
        {
            i=i*2;
        }
        if(((2*i)-1)==x)
        {
            cout<<x+1<<endl;
        }
        else if(i==x)
        {
            cout<<x<<endl;
        }
        else{
            cout<<i-1<<endl;
        }

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