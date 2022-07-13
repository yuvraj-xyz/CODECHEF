#include <bits/stdc++.h>
using namespace std;

// CONSTRUCT N - CONN
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int x = n%7;
        int y = n-7;
        if(n%2==0 || n%7==0)
        {
            cout << "YES" << endl;
        }
        else if(n>7 && (x%2==0 || y%2==0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
