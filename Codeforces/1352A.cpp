#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, t=1;
        cin>>n;
        vector<int>a;
        
        while(n)
        {
            int k = n%10;
            if(k)
                a.push_back(k*t);
            t *= 10;
            n /= 10;
        }
        cout<<a.size()<<endl;
        for(auto it : a)
            cout<<it<<' ';
        cout<<endl;
    }

    return 0;
}