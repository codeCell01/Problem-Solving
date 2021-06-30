#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        bool ok = true;
        cin>>n;
        vector<int>a(n);
        for(auto &it: a)
            cin>>it;

        sort(a.begin(), a.end());
        for(int i=1; i<n; i++)
        {
            if(a[i] - a[i-1] > 1)
                ok = false;
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}