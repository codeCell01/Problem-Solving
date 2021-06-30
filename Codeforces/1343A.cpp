#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin>>n;
        for (i = 2; n >= (1<<i)-1; i++)
        {

            if (n % ((1 << i) - 1) == 0)
            {
                cout << n / ((1 << i )- 1) << endl;
                break;
            }
        }
    }
    return 0;
}