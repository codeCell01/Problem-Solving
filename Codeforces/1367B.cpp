#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, x=0, y=0;
        cin>>n;
        vector<int>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2 != i%2)
            {
                if(i%2)
                    y++;
                else
                    x++;
            }
        }
        if(x!=y)
            cout<<-1<<endl;
        else
            cout<<x<<endl;

    }
    return 0;
}