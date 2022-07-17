#include <bits/stdc++.h>
using namespace std;

// The last Levels - LASTLEVELS
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if(x%3==0)
        {
            cout << ((x*y)+(z*(x/3)))-z << endl;
        }
        else
        {
            cout << (x*y)+(z*(x/3)) << endl;
        }
    }
}
