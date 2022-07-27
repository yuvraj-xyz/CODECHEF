#include <bits/stdc++.h>
using namespace std;

// N buttons 1 bulb - ON_OFF
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;

        int count=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i-1]=='1')
            {
                count++;
            }
        }
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(b[i-1]=='1')
            {
                cnt++;
            }
        }
        int diff = abs(count-cnt);
        if(diff%2==0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
