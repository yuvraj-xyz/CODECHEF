#include <bits/stdc++.h>
using namespace std;

// Valid Minimum - VALIDMIN
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if(x==y && y==z && z==x)
        {
            cout << "YES" << endl;
        }
        else if(x==y && z>y)
        {
            cout << "YES" << endl;
        }
        else if(y==z && x>y)
        {
            cout << "YES" << endl;
        }
        else if(z==x && y>x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
