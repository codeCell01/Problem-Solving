#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i;
    cin>>n;
    vector<long long int>v(n);
    for(auto &it : v)
        cin>>it;

    sort(v.begin(), v.end());
    long long int a=1, b=1;
    for(i=1; i<n; i++)
    {
        if(v[i]==v[i-1])
            a++;
        else
            break;
    }
    for(i=n-2; i>=0; i--)
    {
        if(v[i]==v[i+1])
            b++;
        else
            break;
    }   
    long long int ans = a*b;
    if(v[0]==v[n-1])
        ans = n*(n-1)/2;
    cout<<v[n-1]-v[0]<<" "<<ans<<endl;
    return 0;
}