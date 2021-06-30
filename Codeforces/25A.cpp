#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, ans;
    cin>>n; 
    int a[n];
    for(auto &it : a)
        cin>>it;
    for(int i=0; i<n; i++)
    {
        int p = (i-1 + n)%n;
        int q = (i+1 + n)%n;

        if(a[i]%2 != a[p]%2  &&  a[i]%2 != a[q]%2)
        {
            ans = i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}