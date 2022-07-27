#include <bits/stdc++.h>
using namespace std;

// Maximise the tastiness - MASTASTE
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(a>=b)
        {
            if(c>d)
            {
                cout << a+c << endl;
            }
            else
            {
                cout << a+d << endl;
            }
        }
        else if(b>a)
        {
            if(c>d)
            {
                cout << b+c << endl;
            }
            else
            {
                cout << b+d << endl;
            }
        }
    }
}
