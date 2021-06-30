#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, Mina = 10000000000, Minb = 10000000000, ans = 0LL;
        cin >> n;
        vector<long long int> a(n), b(n);
        for (auto &it : a)
        {
            cin >> it;
            Mina = min(Mina, it);
        }
        for (auto &it : b)
        {
            cin >> it;
            Minb = min(Minb, it);
        }
        for (int i = 0; i < n; i++)
        {
            ans += max(a[i] - Mina, b[i] - Minb);
        }
        cout << ans << endl;
    }
    return 0;
}