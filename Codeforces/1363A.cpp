#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--) 
    {
        int n, x, a, i, even=0, odd=0;
        cin>>n>>x;
        for(i=0; i<n; i++)
        {
            cin>>a;
            odd += a&1;
        }
        even = n-odd;
        bool ok = false;
        for(i=1; i<=odd && i<=x; i+=2)
        {
            if(x-i <= even)
                ok = true;
        }
        if(ok)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}