#include <bits/stdc++.h>
using namespace std;

// Split N - SPLITN
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int res = __builtin_popcount(n);
        cout << res-1 << endl;
    }
}
