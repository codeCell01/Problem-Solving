#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, current, ans=0;
        cin>>n;
        vector<int>Count(n+5);
        for(i=0; i<n; i++)
        {
            int a;
            cin>>a;
            Count[a]++;
        }
        for(i=2; i<=2*n; i++)
        {
            current=0;
            for(int k=1; k<=i/2; k++)
            {
                if(i-k > n)
                    continue;
                if(i==k*2)
                    current += Count[k]/2;   
                else
                    current += min(Count[k], Count[i-k]);
            }
            ans = max(ans, current);
        }
        cout<<ans<<endl;
    }
    return 0;
}