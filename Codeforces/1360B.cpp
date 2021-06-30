#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, ans=INT_MAX;
        cin>>n;
        vector<int>v(n);

        for(auto &it : v)
            cin>>it;
        sort(v.begin(), v.end());
        for(i=1; i<n; i++)
        {
            ans = min(ans, v[i]-v[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}