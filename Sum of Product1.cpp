#include <bits/stdc++.h>
using namespace std;

// Sum of Product 1 - SUMOFPROD1
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,z;
        cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            cin >> z;
            a.push_back(z);
        }

        long long ans = 0;
        long long res = 0;
        for(int i = n - 1; i >= 0; i--) 
        {
            long long incr = a[i] * (1 + res);
            ans += incr;
            res = incr;
        }
        cout << ans << endl;
    }
}
