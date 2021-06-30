#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int x = k/(n-1);
        int y = k%(n-1);

        x = x*n;
        if(y==0)
            x--;
        else
            x += y;
        cout<<x<<endl;
    }
    
    return 0;
}