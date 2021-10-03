#include<iostream>
using namespace std;


void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==0)
    {
        cout<<"Liquid"<<endl;
    }
    else if(b==0)
    {
        cout<<"Solid"<<endl;
    }
    else 
    {cout<<"Solution"<<endl;
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