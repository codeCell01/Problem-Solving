#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin>>a>>b;
        x = min( max(a,2*b), max(2*a,b));
        cout<<x*x<<endl;
    }

    return 0;
}