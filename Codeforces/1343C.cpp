#include<bits/stdc++.h>
using namespace std;

bool check(int a, int b) {
    return (a>0&&b>0) || (a<0&&b<0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, i, x, ans=0LL;
        cin>>n;
        vector<long long int>v(n);
        for(auto &it : v)
            cin>>it;
        x = v[0];
        for(i=1; i<n; i++)
        {
            if(check(v[i],v[i-1]))
            {
                x = max(x,v[i]);
            }
            else
            {
                ans += x;
                x = v[i];
            }
        }
        ans += x;
        cout<<ans<<endl;
    }

    return 0;
}