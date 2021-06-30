#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        if( (n/2)%2 )
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int sum = 0;
            for(i=2; i<=n; i+=2)
                cout<<i<<' ', sum+=i;
            for(i=1; i<n-1; i+=2)
                cout<<i<<' ', sum-=i;
            cout<<sum<<endl;
        }
    }

    return 0;
}