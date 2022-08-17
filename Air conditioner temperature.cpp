#include <bits/stdc++.h>
using namespace std;

// Air Conditioner Temperature
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(b>=a && b>=c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
