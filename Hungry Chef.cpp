#include <bits/stdc++.h>
using namespace std;

// Hungry Chef - BURGERS2
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,n,r;
        cin >> x >> y >> n >> r;

        if(r<(n*x))
        {
            cout << -1 << endl;
        }
        else if((r/y)>=n)
        {
            cout << 0 << " " << n << endl;
        }
        else
        {
            int a = (y*n);
            int z = (x-y);

            int m = (r-a)/z;
            if(((r-a)%z)!=0)
            {
                m++;
            }
            cout << m << " " << n-m << endl;
        }
    }
}
