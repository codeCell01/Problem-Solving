#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a, b, c, d;
    cin>>n>>m;
    c = n/m;
    d = n%m;
    a = (m-d)*(c*(c-1)/2) + d*c*(c+1)/2;

    n -= (m-1);
    b = n*(n-1)/2;

    cout<<a<<" "<<b<<endl;
    return 0;
}