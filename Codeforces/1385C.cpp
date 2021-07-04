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
        vector<int>v(n);
        for(auto &it : v)
            cin>>it;

        while(v[n-1]<=v[n-2])
            n--;
        while(v[n-1]>=v[n-2])
            n--;
        
        cout<<max(0,n-1)<<endl;
    }
    return 0;
}