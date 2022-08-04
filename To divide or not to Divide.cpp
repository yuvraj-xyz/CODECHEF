#include <bits/stdc++.h>
using namespace std;

// To divide or not to Divide - DIVAB
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,n;
        cin >> a >> b >> n;

        if(a%b==0)
        {
            cout << -1 << endl;
            continue;
        }
        int x=n;
        if(x%a!=0)
        {
            x = n+a-(x%a);
        }
        while(!(x%a==0 && x%b!=0))
        {
            x+=a;
            break;
        }
        cout << x << endl;
    }
}

