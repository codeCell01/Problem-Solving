#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    vector<int>v(n);
    for(auto &it : v)
        cin>>it;

    sort(v.begin(), v.end());
    int a=1, b=1;
    for(i=1; i<n; i++)
    {
        if(v[i]==v[i-1])
            a++;
    }
    for()
    return 0;
}