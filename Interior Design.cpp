#include <bits/stdc++.h>
using namespace std;

// Interior Design - INTRDSGN
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,x,y;
        cin >> a >> b >> x >> y;

        if(a+b<=x+y)
        {
            cout << a+b << endl;
        }
        else
        {
            cout << x+y << endl;
        }
    }
}
