#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n, k, i, j;
        cin>>n>>k;
        vector<int>a(n), b(n);
        for(auto &it : a)
            cin>>it;
        for(auto &it : b)
            cin>>it;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());

        for(i=0; i<k; i++)
        {
            if(a[i] <= b[i])
                swap(a[i], b[i]);
            else
                break;
        }
        int sum = 0;
        for(auto it : a)
            sum += it;
        cout<<sum<<endl;
    }

    return 0;    
}